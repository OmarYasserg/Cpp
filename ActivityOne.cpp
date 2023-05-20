#include<iostream>
#include<string>
/* #define HELLO_WORLD "Hello World!"
 */
int main()
{
    std::string name="";   
    int16_t age=0;
    std::string group="";
    /* uint8_t name[]=""; */
    std::cout << "Please enter your name"<< std::endl;
    std::cin >> name;
    std::cout << "Please enter your age"<< std::endl;
    std::cin >> age;
    if(std::cin.fail())
    {
        std::cout << "invalid entry";
        return 0;
    }
    if(age < 0 || age > 100)
    {
        group="Invalid entiry";
    }
    else if(age >= 10 && age <=25 )
    {
/*         std:: cout << name << ", You are in Group A" << std::endl;
 */        group="Group A";
    }
    else if (age>= 25 && age <=40 )
    {
/*         std:: cout << name << ", You are in Group B" << std::endl;
 */        group="Group B";
    }
    else if (age > 40)
    {
/*         std :: cout << name << ", You are in Group C" << std::endl;
 */        group="Group C";
    }
    else
    {
/*         std::cout << name << ", You are not in the list" << std::endl;
 */        group="You are not in the list";
    }
    std :: cout << name << ", " << group << std::endl;
}