#ifndef __COMM
#define __COMM


#include "readKey.h"
#include "ShowView.h"
#include "LabyrinthManager.h"
#include "PlayerManager.h"
#include "InputCfg.h"
#include "Util.h"

extern void showWelcomView();
extern bool askStartORFinishGame();
extern LabIDType chooseIDOfLabyrinth();
extern void showPlayigLabyrinth(MapType* originalMap, MapType* revealedMap, XYPositionType* playerPos);
extern void getPlayerAction(ActionType* actionPtr);

#endif