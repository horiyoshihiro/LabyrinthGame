#include "Util.h"

#define LabIDType       unsigned int
#define MapType         unsigned int[SIZEOFMAP][SIZEOFMAP]



extern void makeLabyrinth(LabIDType* labId);
extern void isWallorWay(int[] position, ActionType action);
extern void revealMap(PositionType revealedPoint);
extern MapType* getRevealedMap();
extern bool isPlayerOnGoal(PositionType* pposition);
extern void getAllIDOFLab(int* numOFLabyrinth);

extern 
