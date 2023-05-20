#include<iostream>
#include<map>
#include<string>
#include<list>

int main()
{
    std::map<std::string , std::list<std::string> > pocAttacks;
    std::list<std::string> pikachuAttacks = {"thunder shock", "tail whip", "quick attack"};
    std::list <std::string> charmanderAttacks {"flame thrower" , "scary face"};
    std::list <std::string> chikoritaAttacks {"razor leaf" , "posion powder"};

    pocAttacks.insert(std::pair<std::string , std::list<std::string>>("Pikachu",pikachuAttacks )  );
    pocAttacks.insert( std::pair <std::string , std::list<std::string>> ("Charmander" , charmanderAttacks));
    pocAttacks.insert( std::pair <std::string , std::list <std::string>> ("Chikorita", chikoritaAttacks));
    for(auto pair : pocAttacks)
    {
        std::cout << pair.first << ": ";
        for (auto it : pair.second)
        {
            std::cout << ", " <<it ;
        }
        std::cout << std::endl;
    }
}