#include<iostream>
#include <memory>
class Rect
{
    
    int m_H;
    
public:
    bool operator==( const Rect other) const;

    int m_W;
    static int objectsCount;
        Rect(const Rect &source)
        {
            objectsCount ++;
            this -> m_H = source.m_H;
            this -> m_W = source.m_W;
        }
        Rect (int h, int w):m_H{0},m_W{0}
        {
            objectsCount ++;
            this -> m_H = h;
            this -> m_W = w;
        }
        void printClass()
        {
            std::cout << this->m_H<<std::endl << this ->m_W << std::endl;
            std::cout << "The cout is: " << objectsCount << std::endl;
        } 
        ~Rect ()
        {
            std::cout << "Destructing the object" << std::endl; 
        }
};
int Rect::objectsCount=0;
int main()
{
    std::unique_ptr<Rect> myRect = std::make_unique<Rect>(5,10);
    Rect first(4,5);
    Rect second(first); 
    myRect ->printClass();
/*     second.printClass();
 */}