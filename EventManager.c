#include "EventManager.h"


void init() {

}

void startGame(){
    time_t playTime;
    bool getToGoal;

    /* prepare for game */
    LabIDType labID = chooseIDOFLabyrinth();
    makeLabyrinth(&labID);
    makePlayer();
    setStartTime();

    /* start process of game */
    

    do {
        getToGoal = playGame();
    }while( !getToGoal )
}

bool playGame(){
    PositionType position;
    int[SIZEOFMAP][SIZEOFMAP] map;
    ActionType action;


    while( 0 ){
        PositionType revealPoint;

        retPos = getPositionOfPl(&position);
        retMap = getMap(&map);

        showGameView(&map, &position);

        ret = getPlayerAction(&action);

        ret = isWallorWay(position, action);


        revealedPoint = plocPlayer(position, ret);

        revealMap(revealedPoint);

        getPositionOfPl(&position);

        if ( isPlayerOnGoal(&position) ) {
            /* player pass the game */
            break;
        }else{
            /* continue process */
        }
    }

    /* process after pass the game */
    int timeRecord = calcPlayTime();

    ProcAfterPassGame();

    backToTitle();

}

void finishGame(){

}