#include<iostream>
#include<memory>

int main()
{
    int x=12;
    std::unique_ptr <uint32_t> myPtr = std::make_unique<uint32_t>(10);
    std::cout << *myPtr;
    std::shared_ptr <uint32_t> myShared = std::make_shared<uint32_t> (30);
    std::shared_ptr <uint32_t> x_ptr = myShared;
    std::cout << myShared.get();
    std::cout << *myShared.get();

}