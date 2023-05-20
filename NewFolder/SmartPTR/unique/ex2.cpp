#include<iostream>
#include<memory>
/* 
int main()
{
    std::unique_ptr<int> new_ptr(new int);
    std::unique_ptr<int> new_ptr2(new int) = new_ptr;

} */

/* Can't copy unique pointer */

/* int main()
{
    std::unique_ptr<int> new_ptr(new int);
    std::unique_ptr<int> new_ptr2(new int) = std::move (new_ptr);

} */
/* new_ptr will be assined  */


/* Copy 
        

 */

/* int main()
{
    std::unique_ptr<int> new_ptr(new int);
    std::unique_ptr<int> new_ptr2(new int);
    std::cout<< new_ptr.get()<< std::endl;
    std::cout<< new_ptr2.get() << std::endl;
    new_ptr.swap(new_ptr2);
    std::cout<< new_ptr.get()<< std::endl;
    std::cout<< new_ptr2.get() << std::endl;
    /* Print the internal ptr managed by ptr1 and ptr2 */
/*
}
 */
/* void func (std::unique_ptr<int> new_pointer)
{
    std::cout << new_pointer << std::endl;
} */

void func (const std::unique_ptr<int> & new_pointer)
{
    std::unique_ptr <int> temp;
    temp = std::move (new_pointer);
}
int main()
{
    std::unique_ptr<int> new_ptr(new int);
    func(std::move(new_ptr));
}
/* Copy for unique pointer, we should use Move*/