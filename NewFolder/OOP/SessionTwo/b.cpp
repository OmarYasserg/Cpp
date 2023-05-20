#include <iostream>

class point
{
    int m_x;
    int m_y;
public:
    point()
    {

    }
    point(int x , int y):m_x {x} , m_y {y} {}
    void xSetter(int x)
    {
         m_x = x;
    }
    void ySetter (int y)
    {
        m_y = y;
    }
    int yGetter(void) 
    {
        return m_y;
    }
    int xGetter(void) 
    {
        return m_x;
    }
    point operator += (point A)
    {
        this -> m_x += A.m_x;
        this -> m_y += A.m_y;
        return *this; 
    }
    
    bool operator > (point& other)
    {
        return ( (this -> m_x > other.m_x) && (this -> m_y > other.m_y) );    
    }
    point& operator ++ (int) /* postfix */
    {
        this -> m_x ++;
        this -> m_y ++;
        return *this;
    }
    point& operator ++() /* prefix */
    {
        ++(this -> m_x);
        ++(this -> m_y);
        return *this;
    }
};

point operator + (point A , point B)
{
    point C{( A.xGetter() + B.xGetter() ) , ( A.yGetter() + B.yGetter() )};
    return C;
}
int main()
{
    point X{2 , 6};
    point Y{3 , 5};
    point Z;
    X+=Y;
/*     std::cout << "is x > y ? " << (Y > X) << std::endl; */
    X++;
    ++X;
    std:: cout << X.xGetter()<< " " << X.yGetter() << std::endl;
/*     std::cout << "x = " << X.xGetter() << "y = " << X.yGetter() << std::endl; */
}