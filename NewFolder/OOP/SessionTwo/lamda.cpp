#include <iostream>
#include <vector>
#include<algorithm>
int main()
{
/*     [cc](){};*/
    std::vector <int> myVect{10,6,45,32,4};
    std::for_each(myVect.begin(), myVect.end(),[](int x)
    {
        if (x % 2 == 0)
        {
            std::cout << x << " is even" << std::endl;    
        }
        else
        {
            std::cout << x << " is odd"<< std::endl;   
        }
    });
}