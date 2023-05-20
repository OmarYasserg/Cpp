/**
 * Project Untitled
 */


#ifndef _STOPWATCH_H
#define _STOPWATCH_H

class StopWatch {
public: 
    uint32_t m_timerValue;
    TimerStates m_state;
    
/**
 * @param Parameter1
 */
void getTimerValue(void Parameter1);
    
void conversionTime();
    
void setTimer();
    
void getTimerState();
};

#endif //_STOPWATCH_H