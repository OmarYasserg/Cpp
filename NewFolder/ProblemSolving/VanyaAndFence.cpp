#include<iostream>

int main()
{
    int h_limit, n, person, total_W , i;
    std::cin >> n >> h_limit;
    total_W = 0;
    for(i=0; i<n; i++)
    {
        std::cin>> person;
        if( person <= h_limit)
        {
            total_W += 1;
        }
        else
        {
            total_W += 2;
        }
    }
    std::cout << total_W;
}