#include <iostream>
#include <set>
int main()
{
    std::multiset<int> mSet ({ 2,3, 4,3 , 4,3  ,5});
    std::set <int> mySet;
    for(auto i : mSet)
    {
        mySet.insert(i);
    }
    for (auto i : mySet)
    {
        std::cout << i;
    }
    std::cout << std::endl;
}