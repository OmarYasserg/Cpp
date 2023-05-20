#include <iostream>
#include<map>
template<typename T , typename P>
void printMap(std::map<T , P> Map)
{
    for(auto i : Map)
    {
        std::cout << i.first << " ";
        std::cout << i.second<< " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::map<int , int> myMap;
    std::map <int , int> copiedMap(myMap);
    std::map <int , int > listMap={{1,2},{4,4}, {9,3}, {9,7}};
    std::map <int , int> iteratorMap (listMap.begin() , listMap.end());
    printMap(listMap);
    std::cout << "Other map";
    
/*     iteratorMap.insert(std::make_pair(12,32));
 */    std::cout << std::endl;printMap(iteratorMap);
    
}