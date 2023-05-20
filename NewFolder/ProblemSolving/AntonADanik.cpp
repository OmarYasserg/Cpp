#include<iostream>
#include <string>
int main()
{
    int n{0};
    char person;
    std::cin >> n;
    int A = 0;
    int D = 0;
    while(n--)
    {
        std::cin >> person;
        if(person == 'A')
        {
            A++;
        }
        else if(person == 'D' )
        {
            D++;
        }
        else
        {

        }
    }
    std::string result = (A > D)? "Anton" : ( (A == D)? "Friendship":"Danik" );
    std::cout << result;
    
}