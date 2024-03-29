#include "EventManager.h"

bool playGame();


void init() {
    showWelcomView();
}

void startGame(){
    time_t playTime;
    bool getToGoal;
    LabIDType labID;

    /* prepare for game */
    do{
        labID = chooseIDOfLabyrinth();
    }while( !(isLabExist(labID)));
    
    setLabyrinth(labID);
    setPlayer();
    setStartTime();

    /* start process of game */
    

    do {
        getToGoal = playGame();
    }while( !getToGoal );
}

bool playGame(){
    XYPositionType* pPosition;
    MapType* pLabMap;
    MapType* prevealedMap;
    ActionType action;
    bool retPos;
    bool retMap;
    bool ret;


    while( 0 ){
        bool isWall;

        retPos = P_getPositionOfPl(pPosition);
        retMap = L_getMap(pLabMap);
        retMap = L_getRevealedMap(prevealedMap);

        showPlayigLabyrinth(pLabMap, prevealedMap, pPosition);

        do{
            getPlayerAction(&action);
        }while( !(isValidAction(action)));
            

        isWall = L_isWallORWay(pPosition, action);


        ret = plocPlayer(pPosition, action, isWall);

        if( ret == TRUE){
            L_revealMap(pPosition);
        }

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

    return true;

}

void ProcAfterPassGame(){

}

void backToTitle(){
    
}

void finishGame(){

}