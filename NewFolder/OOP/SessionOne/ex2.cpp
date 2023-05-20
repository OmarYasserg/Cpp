#include<iostream>
#include <string>
#include <memory>

class vehicle 
{
    std::string brand;
    uint32_t max_speed;
    public:
        vehicle(std::string Brand, uint32_t Max_speed )
        {
            brand= Brand;
            max_speed = Max_speed;
        }
        uint32_t getSpeed(void)
        {
            return max_speed;
        }
        std::string getBrand()
        {
            return brand;
        }
};
class car:vehicle
{
    std::string color;
};
int main()
{
    car:vehicle VW("VW",320);
     std::cout << "you are limited to max speed of :"<< VW.getSpeed()<< ", you have a " << VW.getBrand() << " car"<< std::endl;
 
    
}