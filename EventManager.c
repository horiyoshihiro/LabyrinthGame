#include "EventManager.h"


void init() {

}

void startGame(){
    time_t playTime;
    bool getToGoal;

    /* prepare for game */
    do{
        LabIDType labID = chooseIDOFLabyrinth();
    }while( !(isLabExist(labID)))
    
    setLabyrinth(labID);
    setPlayer();
    setStartTime();

    /* start process of game */
    

    do {
        getToGoal = playGame();
    }while( !getToGoal )
}

bool playGame(){
    XYPositionType* pPosition;
    MapType* pMap;
    ActionType action;


    while( 0 ){
        XYPositionType* revealedPoint;
        bool isWall;

        retPos = P_getPositionOfPl(pPosition);
        retMap = L_getRevealedMap(pMap);

        showGameView(pMap, pPosition);

        do{
            getPlayerAction(&action);
        }while( !(isValidAction(&action)))
            

        isWall = L_isWallorWay(pPosition, action);


        revealedPoint = plocPlayer(pPosition, isWall);

        L_revealMap(revealedPoint);

        P_getPositionOfPl(pPosition);

        if ( L_isPlayerOnGoal(pPosition) ) {
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