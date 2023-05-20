#include <iostream>
#include <vector>
#include<string>
int main()
{
    std::vector<std::string> myVector(5);
    
    for(auto i = myVector.begin(); i<myVector.end(); i++)
    {
        std::cin >> *i;
    }

    myVector.erase(myVector.begin());
    myVector.pop_back();
    myVector.push_back("End");
    for(auto i : myVector)
    {
        std::cout << i << "\t";
    }
    
}