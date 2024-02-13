#include "Labyrinth.h"

LabyrinthType Labyrinths[NUMOFLABYRINTH];

bool isWallorWay(int indexOfLab, XYPositionType* pPosition, XYPositionType* nextDirection){
    XYPositionType nextPos;
    
    for (int i = 0; i < DEMENTIONOFLAB; i++){
        nextPos[i] = pPosition[i] + nextDirection[i];
        if ( nextPos[i] >= SIZEOFMAP){
            /* next pos cant be out of labyrinth */
            return false;
        }
    }

    if( Labyrinths[indexOfLab].labMap[nextPos[0]][nextPos[1]] == WAY) {
        return true;
    } else {
        /* hit to WALL */
        return false;
    }
}
void revealMap(int indexOfLab,XYPositionType* revealedPoint){
    Labyrinths[indexOfLab].revealedMap[(signed int) revealedPoint[0]][(signed int) revealedPoint[1]] = REVEALED;
}
MapType* getRevealedMap(int indexOfLab){
    MapType* pMap = Labyrinths[indexOfLab].revealedMap;
    return pMap;
}

bool isPlayerOnGoal(int indexOfLab, XYPositionType* pPosition){
    for(int i = 0; i < DEMENTIONOFLAB; i ++ ){
        if(Labyrinths[indexOfLab].GoalPosition[i] != pPosition[i]){
            return false;
        }
    }
    /* position is equal to goal position */
    return true;
}

MapType* getMap(int indexOfLab){
    MapType* pMap =  Labyrinths[indexOfLab].labMap;
    return pMap;
}
