#include<iostream>

int main()
{
    int n = 25;
    int index = 1;
    int num;
    int remain = 0;
    while(n--)
    {
        std::cin >> num;
        if(num == 1)
        {
            remain = 13 - index;
            break;
        }
        index++;
    }
    if (remain < 0)
    remain *= -1;
    std::cout << remain;

}