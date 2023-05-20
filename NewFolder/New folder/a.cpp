#include<iostream>


class shape
{
    double getArea(){}
};
class Rect :public shape
{
    public:
    int m_l;
    int m_w;
    Rect (int l , int w): m_l{l}, m_w{w}{}
    double getArea()
    {
        return m_l * m_w;
    }
};
class circle :public shape
{
    public:
    double m_r;
    circle(double r): m_r{r}{}
    double getArea()
    {
        return m_r * m_r * (double)3.14;
    }
};
int main()
{
    circle myShape(2);
    std::cout << "myShape's area -> "<<myShape.getArea() << std::endl;
    Rect otherShape(2,9);
    std::cout << "other shape's area -> " << otherShape.getArea();
}