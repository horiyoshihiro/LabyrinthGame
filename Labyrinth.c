#include "Labyrinth.h"

bool isWallorWay(int indexOfLab, XYPositionType* pPosition, XYPositionType* nextDirection){
    XYPositionType nextPos;
    
    for (int i = 0; i < DEMENTIONOFLAB; i++){
        nextPos[i] = pPosition[i] + nextDirection[i]
        if ( nextPos[i] >= SIZEOFMAP){
            /* next pos cant be out of labyrinth */
            nextPos = pPosition;
            return false;
        }
    }

    if( Labyrinths[indexOfLab].labMap[nextPos[0]][nextPos[1]] == 0) {
        return true;
    } else {
        return false;
    }
}
void revealMap(int indexOfLab,XYPositionType* revealedPoint){
    Labyrinths[indexOfLab].revealedMap[revealedPoint[0]][revealedPoint[1]] = 1;
}
MapType* getRevealedMap(int indexOfLab){
    MapType* pMap = Labyrinths[indexOfLab].revealedMap;
    return pMap;
}

bool isPlayerOnGoal(int indexOfLab, XYPositionType* pPosition){
    for(int i = 0; i < DEMENTIONOFLAB; i ++ ){
        if(Labyrinths[indexOfLab].GoalPosition[i] != pPosition[i]){
            retrun false;
        }
    }
    /* position is equal to goal position */
    return true;
}
