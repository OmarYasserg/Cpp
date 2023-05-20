#include <iostream>
#include "getGroup.hpp"

std::string getGroup(int age)
{
    std::string group="";
    if(age < 0 || age > 100)
    {
        group="Invalid entiry";
    }
    else if(age >= 10 && age <=25 )
    {
        group="Group A";
    }
    else if (age>= 25 && age <=40 )
    {
        group="Group B";
    }
    else if (age > 40)
    {
        group="Group C";
    }
    else
    {
       group="You are not in the list";
    }
    return group;
}
int main()
{
    std::cout<< getGroup(17);
}