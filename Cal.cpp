/* 
 */
#include <iostream>
#include <string>
int main()
{
    int16_t num1{0};
    int16_t num2=0;
    int16_t op;
    while(true)
    {

        std::cin >> num1;
        std::cin >> op;
        std::cin >> num2;
        if (op == -1)
        {
            break;
        }
        else 
        {
            switch (op)
            {
            case '+':
                std::cout << num1 + num2<<std::endl;
                break;
            case '/':
                std::cout << (double)num1 / (double)num2<<std::endl;
                break;
            default:
                break;
            }
        }
    }
}