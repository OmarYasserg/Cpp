#include<iostream>

struct point
{
    uint32_t x;
    uint32_t y;
};

 point operator - (const point & a, const point & b)
 {
    return {a.x - b.x, a.y - b.y};
 }
 
 int main()
 {
    point a{1,6};
    point b{0,2};
    point c=a-b;
    std::cout << "x= "<<c.x << "y= "<<c.y << std::endl;
 }
