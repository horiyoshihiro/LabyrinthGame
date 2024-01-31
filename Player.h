#ifndef __Player
#define __Player

#include "Util.h"

struct PlayerType
{
    XYPositionType currentPosition;
};

typedef struct  Player PlayerType;

extern void setPlayerPosition(XYPositionType* initPlayerPosition);
extern void getPlayerPOsition(XYPositionType* pPosition);
extern void movePlayerWithDiff(XYPositionType* diff);

#endif