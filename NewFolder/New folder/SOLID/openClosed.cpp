#include<iostream>
class flyBehavior
{
    int bird;
    public:
    flyBehavior(){}
    #if NORMAL
    void fly()
    {
        std::cout << "I am flying right now";
    }
    #elif INJURED
    void fly()
    {
        std::cout << "I can't fly";
    }
    #endif
};

class duck
{
    public:
    flyBehavior bird;
    bird.fly();
};


int main()
{

}