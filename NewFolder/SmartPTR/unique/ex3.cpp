#include<iostream>
#include<memory>
void func( std::weak_ptr <uint32_t> veryWeak)
{
    std::shared_ptr <uint32_t> myShare (new uint32_t);
    if(!veryWeak.expired())
    {   
        if(veryWeak.lock())
        {   
            myShare=veryWeak.lock();
            std::cout<<veryWeak.use_count()<< std::endl;
        }
    }
}
int main()
{
    uint32_t y = 82; 
    uint32_t * int_ptr = &y;
    std::shared_ptr <uint32_t> myShared (new uint32_t );
    func(myShared);
    std::cout<<myShared.use_count()<< std::endl;

}

/* Multi threading doesn't see the counter */