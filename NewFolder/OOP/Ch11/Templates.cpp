#include<iostream>
#include<typeinfo>
#include <string>
template<typename T , typename U>
class position
{
    T m_x;
    T m_y;
    T m_Rot;
    public:
    position (T x , T y , U Rot):m_x{x},m_y{y}, m_Rot{Rot}{}
    T getX(){return m_x;}
    T getY(){ return m_y;}
    T getRot() { return m_Rot;}
};
int main()
{
    position <float , float>  floatPos(2.1f,7.12f , 20);
    position <int, float>   intPos(3,6, 20);
    position <long , float>  longPos(12,56, 20);
    std::cout << "Type : " << typeid(floatPos.getX()).name() <<", X= " << floatPos.getX()<< ", y= "<< floatPos.getY() << std::endl;
    std::cout << "Type : " << typeid(intPos.getX()).name() << ", x= " << intPos.getX() <<", y= " <<intPos.getY() << std::endl;
    std::cout << "Type : " << typeid(longPos.getX()).name() << ", x= " <<longPos.getX() << ", y= " << longPos.getY() << std::endl;  
}