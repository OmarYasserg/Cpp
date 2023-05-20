#include<iostream>
#include<memory>

class A
{
    int i=0;
public:
    void setValue(int & value)
    {
        i=value;
    }
    int getValue()
    {
        return i;
    }
};
int main()
{
    int i=20;
    A object;
    object.setValue(i);

    std::cout << object.getValue() << std::endl; 

}