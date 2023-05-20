#include<iostream>

int main()
{
    int x{0};
    int y{0};
    int count{0};
    std::cin >> x >> y;
    do
    {
        x*=3;
        y*=2;
        count ++;
    }while(x <= y);
    std::cout << count;
}