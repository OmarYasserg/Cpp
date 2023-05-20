/**
 * Project Untitled
 */


#ifndef _MICROWAVE_H
#define _MICROWAVE_H

class Microwave {
public: 
    uint32_t m_timer;
    void m_doorStatus;
    void progran;
    void buttonStatus;
    void Attribute3;
    
void init();
    
void Run();
    
void getDoorState();
    
void getTimer();
    
void getSelectedProgram();
    
void sendDataGUI();
private: 
    void MicrowaveState;
};

#endif //_MICROWAVE_H