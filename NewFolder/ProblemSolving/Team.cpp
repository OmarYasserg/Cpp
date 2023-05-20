#include<iostream>

int main()
{
    int n{0};
    int x, y, z;
    int count {0};
    std::cin >> n;
    while(n--)
    {
        std::cin >> x >> y >> z;
        if((x && y)|| (y && z) || (x && z)) 
        {
            count ++;
        }
    }
    std::cout << count;
}