#include<iostream>
#include<memory>
class noisy
{
    public:
    noisy()
    {
        std::cout << "Noisy Constructor\n";
    }
    ~noisy()
    {
        std::cout << "Noisy Destructor \n";
    }
};

int main()
{
    std::unique_ptr <noisy> MySmartPTR (new noisy);
    noisy B;
    MySmartPTR.release();
    MySmartPTR.
    std::cout << MySmartPTR.get();
    MySmartPTR.reset(new B);
}