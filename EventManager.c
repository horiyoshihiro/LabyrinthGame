#include "EventManager.h"


void init() {

}

InputType systemStart(){
    
}

void startGame(InputType input){
    time_t playTime;

    /* prepare for game */
    makeLabyrinth(input);
    makePlayer();
    setStartTime();

    /* start process of game */
    playGame();

    do {
        input = waitInput();

        int position[1][1] = getPositionOfPl();
        bool getToGoal =  revealLab( &position , input );
        if ( FALSE == getToGoal ) {
            reflectToPlPos( &position );
        }

    }while( !getToGoal )

    /* clear this game */
    playTime = calcPlayTime();

    ProcAfterPassGame(playTime);

    waitInput();

    backTotitle();

}

void finishGame(){

}