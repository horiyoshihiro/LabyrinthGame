#include "Timer.h"

/* static variable declaration */
static time_t startTimeOfGame;


void setStartTime(){
    startTimeOfGame = time(NULL);

}

time_t calcPlayTime(){
    time_t finishTimeOfGame;
    
    finishTimeOfGame = time(NULL);

    return (time_t) finishTimeOfGame - startTimeOfGame ;
}