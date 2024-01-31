#ifndef __PLAYERMANAGER
#define __PLAYERMANAGER

#include "Player.h"
#include "PlayerCfg.h"
#include "InputCfg.h"
#include "Util.h"



extern void setPlayer();
extern bool isValidAction(ActionType action);
extern XYPositionType* plocPlayer(XYPositionType* pPosition,ActionType action, bool isWall);
extern bool P_getPositionOfPl(XYPositionType* pPosition);

#endif