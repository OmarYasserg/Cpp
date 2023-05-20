#include <iostream>
#include<exception>
#include<string>
#include<memory>
int deeply_nested()
{
    throw 123;
    std::cout << "After throwing the exception";
}
int main()
{
    try
    {
        auto p = std::make_unique<char []>(100);
        std::string myStr{"HelloThere!"};
        myStr.at(100);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}