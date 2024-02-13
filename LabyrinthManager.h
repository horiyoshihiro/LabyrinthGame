#ifndef __LABYRINTHMANAGER
#define __LABYRINTHMANAGER

#include "LabyrinthCfg.h"
#include "InputCfg.h"
#include "Util.h"

int getIndexOfLab(LabIDType labID);

extern void         setLabyrinth(LabIDType labId);
extern LevelType    getLabInfoByIndex(int indexOfLab);
extern bool         isLabExist(LabIDType labId);
extern void         getArrayOFpLab(LabyrinthType* ArrOfLab);
extern int          getNumOfLab();

extern bool         L_isWallORWay(XYPositionType position, XYPositionType nextDirection);
extern void         L_revealMap(XYPositionType* revealedPoint);
extern bool         L_getRevealedMap(MapType* pMap);
extern bool         L_isPlayerOnGoal(XYPositionType* pposition);
extern bool         L_getMap(MapType* pMap);

#endif