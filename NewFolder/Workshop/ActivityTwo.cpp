#include <iostream>
#include <time.h>
#include <math.h>

uint16_t getNumDig(uint16_t num)
{
    uint16_t digits=1;
    while (num / 10)
    {
        num/=10;
        digits++;
    }
    return digits;
}
uint16_t getSeed(void)
{
    return ((time(NULL)) % 10);
}
uint16_t getRandInRange(int minNum, int maxNum )
{   
    uint16_t seed = getSeed(); 
    uint16_t addFactor = (maxNum - minNum);
    float seedFactor =  (float)seed / (float)(pow(10 , getNumDig(seed)));
    return (float)minNum + ((float)addFactor * seedFactor);
}
int main()
{
    uint16_t NumberOfGuesses{0};
    uint16_t minNum{0};
    uint16_t maxNum{0};
    uint16_t guessNum{0};
    uint16_t RandNum{0};

    std::cout << "Enter the number of guess:\n";
    std::cin >> NumberOfGuesses;
    std::cout << "Enter the Min. number\n";
    std::cin >> minNum;
    std::cout << "Enter the Max. number:\n";
    std::cin >> maxNum;
    if (minNum >= maxNum)
    {
        std::cout << "Invalid range";
        return 0;
    }
    RandNum=getRandInRange(minNum,maxNum);
    uint16_t i=0;

    for(; i<NumberOfGuesses; i++)
    {
        std::cout << "Enter your guess:\n";
        std::cin >> guessNum;
        if (guessNum == RandNum )
        {
            std::cout << "That's right" << std::endl;
            break;
        }
        else if (guessNum > RandNum)
        {
            std::cout << "Your guess is too high!!" << std::endl;
        }
        else
        {
            std::cout << "Your guess is too low!!" << std::endl;
        }
    }
    if( i == NumberOfGuesses)
    {
        std::cout <<"Loser!!" << std:: endl;
    }
    std::cout << "The random number is" << RandNum;
}