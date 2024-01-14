#include "LabyrinthCfg.h"
#include "Labyrinth.h"
#include "Util.h"

int getIndexOfLab(LabIDType labID);

extern void setLabyrinth(LabIDType labId);
extern bool isLabExist(LabIDType labId);
extern void getArrayOFpLab(LabyrinthType* ArrOfLab);
extern int  getNumOfLab();

extern void L_isWallorWay(XYPositionType position, XYPositionType nextDirection);
extern void L_revealMap(XYPositionType revealedPoint);
extern bool L_getRevealedMap(MapType* pMap);
extern bool L_isPlayerOnGoal(XYPositionType* pposition);
