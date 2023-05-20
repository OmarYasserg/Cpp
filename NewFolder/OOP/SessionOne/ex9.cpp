#include<iostream>

class point
{
    int m_x;
    int m_y;
public:
    point(int x , int y):m_x{x},  m_y{y} {}
    /* Equality */ 
    point operator=(const point& source)
    {
        this -> m_x = source.getX();
        this -> m_y = source.getY();
    }
    /* Move */
    point operator=(point& source)
    {
        
    } 
    int getX(void)
    {
        return m_x;
    }
    int getY(void)
    {
        return m_y;
    }
    void printPoint(void)
    {
        std::cout << "x = " << m_x << std::endl << "y = "<< m_y << std::endl;
    }
};
bool operator==(point &first , point &second)
{
    if( first.getX() == second.getX() && first.getY() == second.getY())
    {
        return true;
    }
    else
    {
        return false;
    }
}
/* Addition operator */
point operator+(point& x , point& y)
{
    point z( (x.getX() + y.getX()) , (x.getY() + y.getY()) );
    return z;
}


int main()
{
    point first(1,5);
    point sec(2,5);
    if( first == sec)
    {
        std::cout << "True"<<std::endl;
    }
    else
    {
        std::cout << "False"<<std::endl;
    }
/*     point z = first + sec;
*/    
    point z = first;
    z.printPoint();
}