#include<iostream>
#include<memory>



int main()
{
    std::shared_ptr <uint32_t> myShared = std::make_shared<uint32_t>(10);
    std::cout<<*myShared<< std::endl;
    std::unique_ptr <uint32_t> myUnique = std:: make_unique <uint32_t> (20);
    std:: cout<< *myUnique << std::endl;
}

/* Multi threading doesn't see the counter */