#include<iostream>

class smartPointer
{
    
public: 
int * m_ptr;
    smartPointer(int * ptr): m_ptr{nullptr}
    {
        this -> m_ptr = ptr;
    }
    ~smartPointer()
    {
        delete this -> m_ptr;
    }
};
class Rect
{
    
    int m_H;
    
public:
    int m_W;
    static int objectsCount;
        Rect() = default;
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
            /* std::cout << this->m_H<<std::endl << this ->m_W << std::endl;
            std::cout << "The cout is: " << objectsCount << std::endl; */
        } 
        ~Rect ()
        {
/*             std::cout << "Destructing the object" << std::endl; 
 */        }
}; 
int main()
{
    int x=7;
    {
        smartPointer myPtr(new int);
        std::cout << *myPtr.m_ptr << std::endl;
        Rect Rects[5] = 
        {
            Rect(10,60),
            {60,1},
            {2,10}
        };
    }

}