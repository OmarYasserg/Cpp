#include<iostream>
struct car
{   
    private:
        std::string m_color;
        std::string m_model;
        uint32_t * m_ptr = new uint32_t;
    public:
        car(const car & source)=delete;
    /*     {
            color = source.color;
            model = source.model;
        } */
        car(std::string Color, std::string Model)
        {
            m_color = Color;
            m_model = Model;
        }
      /*   car ( car && source)
        {
            m_color = source.m_color;
            m_model = source.m_model;
            ptr     = source.ptr;
            source.ptr = nullptr;
        } */
        ~car()
        {
            std::cout << "Model is: " << m_model << "Color is: " << m_color<< std::endl;
        }
        std::string getColor()
        {
            return m_color;
        }
        std::string getModel()
        {
            return m_model;
        }
         uint32_t getPtr()
        {
            return *car::m_ptr;
        }

};
int main()
{
    car VW("Dark", "A5");
/*     car myOtherone(VW);
 */    car myNewCar(std::move (VW));
    std::cout << "My color: "<<myNewCar.getColor() << "My model: "<<myNewCar.getModel() << myNewCar.getPtr()<<std::endl;
    std::cout << "My color: "<<VW.getColor() << "My model: "<<VW.getModel() << myNewCar.getPtr()<<std::endl;
    
}