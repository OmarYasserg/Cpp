// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void printX(int x)
{
    printf("%d", x);
}

void printY(int y)
{
    printf("%d", y);
}

int main() 
{
    int y = 100;
    auto function = [&cout, =y] (int x)   {
        x++;
        std::cout << y << std::endl;
        std::cout << y << std::endl;
        std:: cout << x << std::endl;
    };

    function(20);

}