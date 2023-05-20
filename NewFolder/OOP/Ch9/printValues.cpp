#include<iostream>
#include <string>

class printValues
{
    public: 
    printValues(){}   
    void printValue(std::string x , std::string y)
    {
        std::cout << x << y << std::endl;
    }
    void printValue(std::string x )
    {
        std::cout << x << std::endl;
    }
    void printValue(int x)
    {
        std::cout << x << std::endl;
    }
    void  printValue(std::string x , int y)
    {
        std::cout << x << y <<std::endl;
    }
    void printValue(std::string x , float y)
    {
        std::cout << x << y << std::endl;
    }   
    
};

class Article
{
    public:
    std::string m_title;
    int m_pageCount;
    int m_wordCount;  
    std::string m_author;
    printValues printer;
    Article(std::string title, int pageCount, int wordCount, std::string author)
    {
        m_title = title;
        m_pageCount = pageCount;
        m_author = author;
        m_wordCount = wordCount;
    }
    void showDetails(void)
    {
        printer.printValue("title is ",m_title);
        printer.printValue("page cout = ", m_pageCount);
        printer.printValue("written by ", m_author);
        printer.printValue("the word cout is ", m_wordCount);
    }
};
class shape
{
    public:
    float m_D{0};
    float m_W{0};
    float m_L{0};
    float m_H{0};
    std::string m_shape;
    float m_Area{0};
    shape(std::string Shape , float D):m_D{D} , m_shape{Shape} , m_Area{3.1415 * (D*D/4)} {}
    shape(std::string Shape , float L , float W):m_L{L},m_W{W} , m_shape{Shape} , m_Area{m_L * m_W}{}
    shape(std::string Shape , float L, float W, float H):m_L{L}, m_W{W}, m_H{H} , m_shape{Shape} , m_Area{m_L * m_W * m_H}{}
    printValues printer;
    void showDetails(void)
    {
        printer.printValue("shape is " , m_shape);
        printer.printValue("Area = ", m_Area);

    }
};
int main()
{
    /* Article marvel("Marvel", 20 , 90 ,"A.Farid");
    marvel.showDetails();
     */

    shape circle("Circle",2.19);
    circle.showDetails();
    shape Rect ("Rectange", 5 , 8);
    Rect.showDetails();

}