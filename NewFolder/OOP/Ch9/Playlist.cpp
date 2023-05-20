#include <iostream>
#include <string>
#include <algorithm>
#include <list>
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
class Track
{
    std::string m_trackName;
    int m_trackLength;
    public:
    Track(std::string Name , int len):m_trackName{Name}, m_trackLength{len}{}
    int getLength(void)
    {
        return m_trackLength;
    }

    std::string getName(void)
    {
        return m_trackName;
    }
    printValues printer;
    void showDetails()
    {
        printer.printValue("TrackName ", this->getName());
        printer.printValue("trackLen[s]:  ", this->getLength());
    }
};

class Playlist 
{
    std::list <Track>playList;
    public:
    void addTrack(Track newTrack)
    {
        playList.push_back(newTrack);
    }
  /*   void removeTrack (Track delTrack)
    {
        playList.remove(delTrack);
    } */
    void sortTracks()
    {
        playList.
    }
    printValues printer;
    void showDetails(void)
    {
        for(auto it : playList)
        {
            it.showDetails();
        }
    }
};
int main()
{
    Playlist Omar;
    Track SongD("SongD", 100);
    Track SongX("SongX", 340);
    Track SongB("SongB", 150);
    Track SongA("SongA", 120);
    Omar.addTrack(SongA);
    Omar.addTrack(SongB);
    Omar.addTrack(SongX);
    Omar.sortTracks();
    Omar.showDetails();
    
}