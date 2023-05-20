#include <iostream>
struct noisy
    {
        noisy()
        {
            std::cout << "constructing noise"<< std::endl;
        }
        ~noisy()
        {
            std::cout << "constructing noise"<< std::endl;
        }
    };
int main() 
{
    // Write C++ code here
/*     noisy N();
 */    noisy * p = new noisy;
    delete [] p;

}