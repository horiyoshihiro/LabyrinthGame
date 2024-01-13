#include "EventManager.h"


void init() {

}

void startGame(){
    time_t playTime;

    /* prepare for game */
    LabID labID = chooseLabyrinth();
    makeLabyrinth(&labID);
    makePlayer();
    setStartTime();

    /* start process of game */
    

    do {
        bool getToGoal = playGame();
    }while( !getToGoal )
}

bool playGame(){
    int[1][1] position;
    int[SIZEOFMAP][SIZEOFMAP] map;
    ActionType action;

    retPos = getPositionOfPl(&position);
    retMap = getMap(&map);

    showGameView(&map, &position);

    ret = getPlayerAction(&action);

    ret = isWallorWay(position, action);


    plocPlayer(position, ret);

    getPositionOfPl(&position);

    if ( )

}

void finishGame(){

}