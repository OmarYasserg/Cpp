#include <iostream>

int main()
{
    int size;
    std::cin >> size;
    int * ptr = new int[size];
    for (int i =0; i<size; i++)
    {
        std::cin >> ptr[i];
    }
    for (int i = 0; i<size; i++)
    {
        delete [] ptr;
        std::cout << ptr[i] <<" ";
    }
}