#include<iostream>

#include<array>
#include <vector>
void printVectorData(std::vector<int>& x)
{
    std::cout << x.size() << std::endl;
    std::cout << x.max_size() << std::endl;
    x.push_back(19) ;    
    x.shrink_to_fit();
    std::cout << x[100] << std::endl;
}
int main()
{
    std::vector<int> vector (100,1);
    printVectorData(vector);
    /* 
    std::cout << vector.size() << std::endl;
    std::cout << vector.max_size(); */
}
