#include "Player.h"

static XYPositionType posOfPl;

void setPlayerPosition(XYPositionType* PlayerPosition){
    posOfPl = *PlayerPosition;
}
void getPlayerPOsition(XYPositionType* pPosition){
    pPosition[0] = posOfPl[0];
    pPosition[1] = posOfPl[1];
}
void movePlayerWithDiff(XYPositionType* diff){
    posOfPl[0] += diff[0];
    posOfPl[1] += diff[1];
}