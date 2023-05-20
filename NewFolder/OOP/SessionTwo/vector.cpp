#include <iostream>
#include <vector>
std::vector <int>num {1,2,3,4 , 5};
std::vector<int>::iterator iter;

int main()
{
    int temp;
   num.clear(); 
   for(int number=0; number < 5; number++)
   {
        std::cin >> temp;
        num.push_back( temp);
   }

    for(iter = num.begin(); iter != num.end(); iter ++)
    {
        std::cout << *iter << " ";
    }
    iter = num.end() -1;
    std::cout << "last element is: " << *iter;
}