#ifndef __LABYRINTH
#define __LABYRINTH

#include "Util.h"

#define INVALID_LAB_INDEX   100U;
#define INVALID_DIFFICULTY  100U;

#define SIZEOFMAP       (unsigned int)5
#define DEMENTIONOFLAB  (unsigned int)2
#define NUMOFLABYRINTH  (unsigned int)2

#define WALL            1
#define WAY             0

typedef     unsigned int LabIDType;
typedef     unsigned int LevelType;
typedef     unsigned int MapType[SIZEOFMAP][SIZEOFMAP];
typedef struct LabyrinthType    LabyrinthType;
typedef struct LabsInfo         LabsInfo;

struct LabyrinthType
{
    LabIDType           ID;
    LevelType           difficulty;
    XYPositionType      GoalPosition;
    XYPositionType      StartPosition;
    MapType*            labMap;
    MapType*            revealedMap;
};

struct LabsInfo
{
    LabyrinthType*  labsList;
    LabIDType       PlayinglabID;
};





extern bool isWallorWay(int indexOfLab, XYPositionType* position, XYPositionType* nextDirection);
extern void revealMap(int indexOfLab, XYPositionType* revealedPoint);
extern MapType* getRevealedMap(int indexOfLab);
extern bool isPlayerOnGoal(int indexOfLab, XYPositionType* pposition);
extern MapType* getMap(int indexOfLab);

#endif