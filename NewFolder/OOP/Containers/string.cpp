#include <iostream>
#include<string>
#include <vector>
#include<algorithm>
int main()
{
    std::string myStr("Hello there, this is Omar",0, 20 )  ;

    for(std::string::iterator it = myStr.begin(); it < myStr.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;
    std::vector<int> myVect{1,23,54,12,43,10};
    std::vector<int>::iterator it = std::find(myVect.begin(), myVect.end(), 12);
    if(it != myVect.end())
    {
        std::cout<< std::distance(myVect.begin() , it);
    }
}