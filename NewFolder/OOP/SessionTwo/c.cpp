#include<iostream>
#include<memory>
class Array
{
    public:
    int * values;
    int m_size;
    Array(int size)
    {
        this -> m_size = size;
        values = new int [m_size];        
    }
    ~Array()
    {
        delete [] values;
    }
    int& operator [] (int index)
    {
        if(index >= this -> m_size)
        {
            throw std::invalid_argument("invalid index");
        }
        return values[index];
   }
   int& operator * ()
   {
        return *values;
   }
 
};
class length
{
    public:
        int m_x;
    length(int Length):m_x{Length}{}
    operator int ()
    {
        return m_x;
    }
};
int main()
{
    Array myArr{3};
    myArr[0] = 1;
    myArr[1] = 3;
    myArr[2] = 8;
    length myLen(20);
    int x = myLen;

    std::cout << myArr[0] << "  " << myArr[1] << " " << myArr[2] << std::endl;
    std::cout << *myArr;
}