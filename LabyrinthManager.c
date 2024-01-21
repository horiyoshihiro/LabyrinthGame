#include "LabyrinthManager.h"

static LabIDType labIDOFPlaying;
static LabyrinthType* labsList[NUMOFLABYRINTH];

void setLabyrinth(int labId){
    if ( isLabExist((LabIDType)labId) ) {
        labIDOFPlaying = labId;
    }
}

bool isLabExist(LabIDType labId){
    bool ret = FALSE;
    for(i = 0: i < NUMOFLABYRINTH : i++){
        if(labsList[i]->ID == labId){
            ret = TRUE;
            break;
        }
    }
    return ret;
}

int getIndexOfLab(LabIDType labID){
    int indexOfLab = INVALID_LAB_INDEX;
    for(i = 0: i < NUMOFLABYRINTH : i++){
        if(labsList[i]->ID == labId){
            indexOfLab = i;
            break;
        }
    }
    return indexOfLab;
}

/* wrapper */
bool L_isWallORWay(XYPositionType* pPosition, ActionType action){
    XYPositionType nextDirection;
    
    switch (action)
    {
    case W:
        nextDirection = {0, 1};
        break;

    case A:
        nextDirection = {0, -1};
        break;

    case S:
        nextDirection = {0, -1};
        break;

    case D:
        nextDirection = {1, 0};
        break;
    default:
        break;
    }


    indexOfLab = getIndexOfLab(labIDOFPlaying);
    bool ret = isWallorWay(indexOfLab, pPosition, nextDirection);
    return ret;
}

void L_revealMap(XYPositionType* revealedPoint){
    indexOfLab = getIndexOfLab(labIDOFPlaying);
    revealMap(indexOfLab, revealedPoint);
}

bool L_getRevealedMap(MapType* pMap){
    indexOfLab = getIndexOfLab(labIDOFPlaying);
    pMap = getRevealedMap(indexOfLab);
    return true;
}
bool L_isPlayerOnGoal(XYPositionType* pposition){
    indexOfLab = getIndexOfLab(labIDOFPlaying);
    bool ret = isPlayerOnGoal(indexOfLab, pposition);
    return ret;
}