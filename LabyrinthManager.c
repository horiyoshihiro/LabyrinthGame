#include "LabyrinthManager.h"

static LabIDType s_labIDOFPlaying;
static LabyrinthType* s_labsList[NUMOFLABYRINTH];

void setLabyrinth(LabIDType labId){
    if ( isLabExist((LabIDType)labId) ) {
        s_labIDOFPlaying = labId;
    }
}

LevelType getLabInfoByIndex(int labIndex){
    if ( labIndex < NUMOFLABYRINTH ){
        return Labyrinths[labIndex].difficulty;
    }
    return INVALID_DIFFICULTY;
}

bool isLabExist(LabIDType labId){
    bool ret = FALSE;
    for(int i = 0 ; i < NUMOFLABYRINTH ; i++){
        if(s_labsList[i]->ID == labId){
            ret = TRUE;
            break;
        }
    }
    return ret;
}

int getIndexOfLab(LabIDType labID){
    int indexOfLab = INVALID_LAB_INDEX;
    for(int i = 0; i < NUMOFLABYRINTH ; i++){
        if(s_labsList[i]->ID == labID){
            indexOfLab = i;
            break;
        }
    }
    return indexOfLab;
}

/* wrapper */
bool L_isWallORWay(XYPositionType* pPosition, ActionType action){
    int indexOfLab;
    XYPositionType nextDirection;
    
    switch (action)
    {
    case W:
        nextDirection[2] = {0, 1};
        break;

    case A:
        nextDirection[2] = {0, -1};
        break;

    case S:
        nextDirection[2] = {0, -1};
        break;

    case D:
        nextDirection[2] = {1, 0};
        break;
    default:
        break;
    }


    indexOfLab = getIndexOfLab(s_labIDOFPlaying);
    bool ret = isWallorWay(indexOfLab, pPosition, nextDirection);
    return ret;
}

void L_revealMap(XYPositionType* revealedPoint){
    int indexOfLab = getIndexOfLab(s_labIDOFPlaying);
    revealMap(indexOfLab, revealedPoint);
}

bool L_getRevealedMap(MapType* pMap){
    int indexOfLab;
    indexOfLab = getIndexOfLab(s_labIDOFPlaying);
    pMap = getRevealedMap(indexOfLab);
    return true;
}
bool L_isPlayerOnGoal(XYPositionType* pposition){
    int indexOfLab;
    indexOfLab = getIndexOfLab(s_labIDOFPlaying);
    bool ret = isPlayerOnGoal(indexOfLab, pposition);
    return ret;
}

bool L_getMap(MapType* pMap){
    int indexOfLab = getIndexOfLab(s_labIDOFPlaying);
    pMap = getMap(indexOfLab);
}