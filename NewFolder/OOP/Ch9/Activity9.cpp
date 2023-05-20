#include <iostream>
#include <string>
#include <vector>

class attack
{
    public:
    std::string m_name;
    int m_attackStat;
    attack(const attack& other)
    {
        this -> m_name = other.m_name;
        this ->m_attackStat = other.m_attackStat;
    }

    attack& operator = (const attack & other)
    {
        this -> m_name = other.m_name;
        this -> m_attackStat = other.m_attackStat;
        return *this;
    }

};
class item
{
    std::string m_name;
    int m_healStat;
    item (const  item& other )
    {
        this -> m_name = other.m_name;
        this -> m_healStat = other.m_healStat;
    }

    item& operator = (item * other)
    {
        this -> m_name = other->m_name;
        this -> m_healStat = other -> m_healStat;
        return *this;
    } 
};
class characters
{
    public:
    std::string m_name;
    std::vector <std::string> m_items;
    std::vector <std::string> m_attacks;
    int m_health;
    int m_strengthMultiplier;
    int m_defenceMultiplier;
    int m_indexOfDefaultAttack;
    characters(std::string name, std::vector<std::string>  items, int strengthMultiplier,int defenceMultiplier, std::vector<std::string>  attacks)
    {
        m_name = name;
        m_attacks = attacks;
        m_items = items;
        m_strengthMultiplier = strengthMultiplier;
        m_defenceMultiplier = defenceMultiplier;
        
    }
};
int main()
{

}