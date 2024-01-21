#include "LabyrinthCfg.h"
#include "Util.h"

#define INVALID_LAB_INDEX   100U;

typedef     unsigned int LabIDType;
typedef     unsigned int MapType[SIZEOFMAP][SIZEOFMAP];

struct LabyrinthType
{
    LabIDType           ID;
    XYPositionType      GoalPosition;
    XYPositionType      StartPosition;
    MapType             labMap;
    MapType             revealedMap;
};

typedef struct LabyrinthType LabyrinthType;



extern bool isWallorWay(int indexOfLab, XYPositionType* position, XYPositionType* nextDirection);
extern void revealMap(int indexOfLab, XYPositionType* revealedPoint);
extern MapType* getRevealedMap(int indexOfLab);
extern bool isPlayerOnGoal(int indexOfLab, XYPositionType* pposition);