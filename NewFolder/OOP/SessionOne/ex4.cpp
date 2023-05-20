#include<iostream>
struct car
{   
    private:
        std::string color;
        std::string model;
    public:
        car(std::string Color, std::string Model)
        {
            color = Color;
            model = Model;
        }
        ~car()
        {
            std::cout << "Model is: " << model << "Color is: " << color<< std::endl;
        }

};
int main()
{
    car VW("Black", "A1");

}