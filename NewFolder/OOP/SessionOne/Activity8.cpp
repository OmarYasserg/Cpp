#include<iostream>
#include<string>
#include<cstring>
#include<memory>
/* void cpyString(char * source , char * dis)
{
    uint16_t i = 0;
    while(source[i] != '\0')
    {
        dis[i] = source[i];
    }
    dis[i] = '\0';
} */
class videoClip
{
public:
    int m_videoTrackLen;
    std::string m_name;
    int m_yearOfRelease;
    int m_dataLen;
    char * m_data;
    /* std::shared_ptr<char> m_data = std::make_shared<char>();  */
    
    videoClip():m_videoTrackLen{}, m_name{" "}, m_dataLen{0},m_data{NULL} {}
    videoClip(int videoLen, std::string name, const char * data)
    {
        m_videoTrackLen = strlen(data);
        m_name = name;
       /*  m_data.reset(new char[m_dataLen + 1]) ; */
        m_data = new char[m_dataLen + 1];
        strcpy(m_data, data);
    }
    videoClip(const videoClip& source)
    {
        this ->m_videoTrackLen = source.m_videoTrackLen;
        this ->m_name = source.m_name;
        this ->m_dataLen = source.m_dataLen;
        this ->m_data = new char[m_dataLen + 1];
        strcpy(m_data, source.m_data);
    }
    videoClip operator=(const videoClip& source)
    {
        this ->m_videoTrackLen = source.m_videoTrackLen;
        this ->m_name = source.m_name;
        this ->m_dataLen = strlen(source.m_data);
        this ->m_data = new char[m_dataLen + 1];
        strcpy(m_data, source.m_data);

        return *this;
    }
  /*     operator int ()const 
    {
        return m_videoTrackLen;
    } */
    ~videoClip()
    {
        delete [] m_data;
    }
};
int main()
{
    videoClip vc1(10, "Halloween (2019)", "dfhdhfidghirhgkhrfkghfkg");
    std::cout << vc1.m_videoTrackLen << " " << vc1.m_name << " " << vc1.m_data << std::endl;
    videoClip vc4;
    vc4 = vc1;
    /* std::cout << x <<std::endl; */
    std::cout << vc4.m_videoTrackLen << " " << vc4.m_name << " " << vc4.m_data << std::endl;

}