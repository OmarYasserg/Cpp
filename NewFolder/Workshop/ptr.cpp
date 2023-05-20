#include<iostream>
#include<memory>
#include <array>
template<typename T>
void swap(T& x, T& y)
{
    int temp = x;
    x = y;
    y = temp;
}
class trash 
{
public:
	trash()
	{
		std::cout << "Constructor has been invoked" << std::endl;
	}
	~trash()
	{
		std::cout << "Destructor has been invoked" << std::endl;
	}
};
int main()
{

    std::array<int , 10> a;
    a[12]=2;
    std::cout << a[12] << std::endl;
    std::cout<< a.size();
    a.swap()
}