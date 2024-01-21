#include "Player.h"

static XYPositionType posOfPl;

void setPlayerPosition(XYPositionType* PlayerPosition){
    for (int i = 0; i < sizeof(PlayerPosition) / sizeof(XYPositionType); i++ ){
        posOfPl[i] = PlayerPosition[i];
    }
}
void getPlayerPOsition(XYPositionType* pPosition){
    for (int i = 0; i < sizeof(pPosition) / sizeof(XYPositionType); i++ ){
        pPosition[i] = posOfPl[i];
    }
}
void movePlayerWithDiff(XYPositionType* diff){
for (int i = 0; i < sizeof(PlayerPosition) / sizeof(XYPositionType); i++ ){
        posOfPl[i] += diff[i];
    }    
}