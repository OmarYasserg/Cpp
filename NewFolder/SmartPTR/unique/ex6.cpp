#include<iostream>
#include<memory>

int main()
{
/*     std::unique_ptr<int> myUniquePTR (new int);
 */ 
    std::unique_ptr<int> myUniquePTR = std::make_unique<int>();
    *myUniquePTR=20;
    std::cout << myUniquePTR.get() << std::endl;
    std::cout << *myUniquePTR <<std::endl ;

}
