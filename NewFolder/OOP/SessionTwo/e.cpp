#include<iostream>
#include<array>
template <typename T , typename U>
class pair
{
    public:
    T key;
    U value;
    pair(T key , U value):key{key} , value {value}{}
    pair() = default;
};
int main()
{
    Array<int> MyArr;
    pair<char , int> New('a', 320);

    std::cout << New.key << " " << New.value << std::endl;
}