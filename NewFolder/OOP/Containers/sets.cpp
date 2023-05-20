#include <iostream>
#include <set>
#include <vector>

std::set <int> mySet;
std::multiset <int> intMultiSet;
std::vector<int> myVect;

int main()
{
    for(unsigned int i = 0; i < 12; i++)
    {
        intMultiSet.insert(1 + rand() % 10);
    }
    for (auto it : intMultiSet)
    {
        mySet.insert(it);
    }
    std::cout << "myVector" << std::endl;
    for(auto it : intMultiSet)
    {
        int i = 0;
        std::cout << it << ", ";
        if ( i == 4 || i == 8 || i == 60 || i == 80 )
        {
            std::cout << std::endl;
        }
        i++;
    }
    std::cout << std::endl<< "Set" << std::endl;
    for(auto it : mySet)
    {
        std::cout << it << ", ";
    }
}