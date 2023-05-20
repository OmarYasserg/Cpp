#include<iostream>

class AdvancedRect
{
    int m_H;
    int m_W;
 public:
    void drawRect();
    int getArea();
    void setter(int h , int w);
    AdvancedRect(int h, int w ) : m_H{h}, m_W{w} 
    {

    }
};
void AdvancedRect::drawRect()
{
    std::cout << "Drawing Rect.." << std::endl;
}
int AdvancedRect::getArea()
{
    std::cout << m_H*m_W << std::endl;
}
/* void AdvancedRect::setter(int h , int w)
{
    if (h >= 0 )
    {
        this ->m_H = h;
    }
    else
    {
        throw std::invalid_argument("invalid width") ;
    }
    if (w >= 0)
    {
        this ->m_W = w;
    }
    else
    {
        throw std::invalid_argument("invalid height");      
    }
} */
void AdvancedRect::setter(int h, int w)
{
    if (h >= 0)
    {
        AdvancedRect::m_H = h;
    }
    else
    {
        throw std::invalid_argument("Invalid height");
    }
    if (w >= 0)
    {
        AdvancedRect::m_W = w;
    }
    else
    {
        throw std::invalid_argument("Invalid width");
    }
}
int main()
{
    int x{0};
    int y{0};
    AdvancedRect New(3,5);
    std::cin >> x >> y ;
/*     New.setter(x,y);
 */    New.drawRect();
    New.getArea();
}