#include<iostream>
#include<memory>

int main()
{
/*     uint32_t * intPTR = new(uint32_t);
 */    /* uint32_t y=82;
    intPTR =  &y; */
    std::unique_ptr <uint32_t> myUnique(new uint32_t);
/*     std:: unique_ptr<uint32_t> myUnique(uint32_t * intPTR);
 */    std::cout << myUnique.get() ;
}