#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <random>


class Entity 
{
public:
    Entity(std::string name) : m_name(name) {}

    std::string getName() const { return m_name; }
    
private:
    std::string m_name;
};

class Attack 
{
public:
    Attack(std::string name, int damage) : m_name(name), m_damage(damage) {}

    int getDamage() const { return m_damage; }
    std::string getName() const { return m_name; }

private:
    std::string m_name;
    int m_damage;
};


class Item 
{
public:
    Item(std::string name, int healAmount) : m_name(name), m_healAmount(healAmount) {}

    int getHealAmount() const { return m_healAmount; }
    std::string getName() const { return m_name; }

private:
    std::string m_name;
    int m_healAmount;
};

class Character : public Entity 
{
public:
    int m_health;
    int m_strength;
    int m_defense;
    Character(std::string name, int health, int strength, int defense)
        : Entity(name), m_health(health), m_strength(strength), m_defense(defense) {}

    int getHealth() const { return m_health; }
    int getStrength() const { return m_strength; }
    int getDefense() const { return m_defense; }

    void takeDamage(int damage) 
    {
        m_health -= damage;
        if (m_health < 0) 
        {
            m_health = 0;
        }
    }

    void heal(int amount) 
    {
        m_health += amount;
    }

    void attack(Character& other, Attack& attack) 
    {
        
        int damage = m_strength - other.m_defense + attack.getDamage();
        if (damage < 0) 
        {
            damage = 0;
        }

        other.takeDamage(damage);

        std::cout << getName() << " attacks " << other.getName() << " with " << attack.getName()
             << " for " << damage << " damage." << std::endl;
    }

   
};

class Enemy : public Character 
{
public:
    Enemy(std::string name, int health, int strength, int defense, int xpReward)
        : Character(name, health, strength, defense), m_xpReward(xpReward) {}

    int getXP() const { return m_xpReward; }

private:
    int m_xpReward;
};

class Player : public Character 
{
public:
    Player(std::string name, int health, int strength, int defense, int level)
        : Character(name, health, strength, defense), m_level(level), m_xp(0) {}

    int getLevel() const { return m_level; }
    int getXP() const { return m_xp; }


    void gainXP(int amount) 
    {
        m_xp += amount;

        int xpToNextLevel = m_level * 100;
        if (m_xp >= xpToNextLevel) {
            m_level++;
            m_xp -= xpToNextLevel;

        /*  Increase player stats when leveling up */
            m_health += 10;
            m_strength += 5;
            m_defense += 5;

            std::cout << getName() << " leveled up to level " << m_level << "!" << std::endl;
        }
    }

private:
    int m_level;
    int m_xp;
};

/* Generate a random number between min and max  */
int getRandomNumber(int min, int max) 
{
    static std::random_device rd;
    static std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(mt);
}

int main() 
{
    Player player("Player", 100, 20, 10, 1);

    std::vector<Enemy> enemies = {
        Enemy("Goblin", 50, 10, 5, 20),
        Enemy("Troll", 100, 20, 10, 50),
        Enemy("Dragon", 200, 50, 20, 100),
    };

/*      Create  items */
    std::vector<Item> items = 
    {
        Item("Potion", 20),
        Item("Super Potion", 50),
        Item("Max Potion", 100),
    };

    /* Main loop of the game */
    while (true) {
    /*Print player stats */
        std::cout << "------------------------" << std::endl;
        std::cout << "Player Stats:" << std::endl;
        std::cout << "Level: " << player.getLevel() << std::endl;
        std::cout << "XP: " << player.getXP() << std::endl;
        std::cout << "Health: " << player.getHealth() << std::endl;
        std::cout << "Strength: " << player.getStrength() << std::endl;
        std::cout << "Defense: " << player.getDefense() << std::endl;
        std::cout << "------------------------" << std::endl;

        /* Get user input */
        std::cout << "What do you want to do?" << std::endl;
        std::cout << "1. Fight an enemy" << std::endl;
        std::cout << "2. Use an item" << std::endl;
        std::cout << "3. Quit game" << std::endl;
        int choice;
        std::cin >> choice;

        if (choice == 1) 
        {
            /* pick a random enemy */
            int index = getRandomNumber(0, enemies.size() - 1);
            Enemy& enemy = enemies[index];

            std::cout << "You encounter a " << enemy.getName() << "!" << std::endl;

            for(;;)
            {
                /* Player attacks enemy */
                Attack attack("Attack", player.getStrength());
                player.attack(enemy, attack);

                if (enemy.getHealth() == 0) 
                {
                    /*  Enemy is defeated */
                    std::cout << "You defeated the " << enemy.getName() << " and gained " << enemy.getXP()
                         << " XP!" << std::endl;

                    /* Player gains XP  */
                    player.gainXP(enemy.getXP());

                    /* Remove enemy from vector */
                    enemies.erase(enemies.begin() + index);

                    break;
                }

                /* Enemy attacks player */
                Attack enemyAttack("Attack", enemy.getStrength());
                enemy.attack(player, enemyAttack);

                if (player.getHealth() == 0) 
                {
                    /* Player is defeated D:*/
                    std::cout << "Game over!" << std::endl;
                    return 0;
                }
            }
        } else if (choice == 2) 
        {

            std::cout << "Choose an item to use:" << std::endl;
            for (int i = 0; i < items.size(); i++)
            {
                std::cout << ". " << i.getName() << " (+" << i.getHealAmount()
                     << " health)" << std::endl;
            }

             /* Get user input */
            int itemChoice;
            std::cin >> itemChoice;

            if (itemChoice >= 1 && itemChoice <= items.size()) 
            {

                Item& item = items[itemChoice - 1];

                player.heal(item.getHealAmount());

                std::cout << "You used a " << item.getName() << " and healed " << item.getHealAmount()
                     << " health!" << std::endl;

                items.erase(items.begin() + itemChoice - 1);
            } 
            else 
            {
                std::cout << "Invalid choice!" << std::endl;
            }
        }
        else if (choice == 3) 
        {
            std::cout << "Thanks for playing!" << std::endl;
            return 0;
        } 
        else 
        {
            std::cout << "Invalid choice!" << std::endl;
        }
    }

    return 0;
}