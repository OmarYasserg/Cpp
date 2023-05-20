#include <iostream>
#include <array>
void printArr(std::array<int , 20> Arr, int size)
{
    int i=0;
    for( uint32_t n: Arr)
    {
        std::cout<< n <<std::endl;
    }
}
int main()
{
    std::array<int , 20> Arr;
   Arr.fill(2);
   Arr.at(2)=10;
   printArr(Arr,20);
   std::cout << "Max size =" << Arr.max_size() << std::endl;
}