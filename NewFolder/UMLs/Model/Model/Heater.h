/**
 * Project Untitled
 */


#ifndef _HEATER_H
#define _HEATER_H

class Heater {
public: 
    HeaterStatus m_status = INVALID_STATE;
    
void Start();
    
void Stop();
};

#endif //_HEATER_H