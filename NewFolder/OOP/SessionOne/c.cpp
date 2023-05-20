#include<iostream>
#include <vector>
#include <algorithm>
void swap(int & x , int & y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    std::vector <int> myVector{1,2,5,0,3,6,7};
    /* auto it = find(myVect.begin() , myVect.end(), 4);
    std::cout << *it << std::endl; */

    /* std::for_each(begin(myVect) , end(myVect) ,[](int x){
        std::cout << x << std::endl;
    }); */
    int size = sizeof(myVector) / sizeof(myVector[0]);
    std::cout << myVector.max_size() << std::endl;
   /*  for(auto i = 0; i < size; i++)
    {
        for(int j = 1; j < size ; j++)
        {
            if( i > j)
            {
                swap(&myVector[i] , &myVector[j]);
            }
        }
    } */
    int x {5};
    int y{7};
    swap(x ,y);
    printf("x = %d, y = %d", x ,y);
   /*  for(int iterator : myVector)
    {
        std::cout << iterator << std::endl;
    } */
   
}