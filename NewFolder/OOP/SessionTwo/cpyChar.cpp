#include <iostream>

void copyChar (char * from, char * to);
int main()
{
    char string[]="Hello there";
    char myStr[20];
    copyChar(string , myStr);
    std::cout << myStr;
}
void copyChar (char * from, char * to)
{
    while( *from != '\0')
    {
        *to++ = *from++;
    }
    *to = '\0';
}
