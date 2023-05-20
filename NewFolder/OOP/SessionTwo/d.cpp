#include<iostream>

template <typename T>
T larger(T x , T y)
{
    return (x>y)?x:y;
}
template <typename T , typename U >
void display(T key , U value)
{
    std::cout << key << value << std::endl;
}
int main()
{
    double num = larger(2.3 , 4.5);
    larger('a','b');
    display("Omar", 100);
}