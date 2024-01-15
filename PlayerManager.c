#include "PlayerManager.h"


void setPlayer(){
    XYPositionType initPlayerPosition = {X_INITPOS, Y_INITPOS};
    setPlayerPosition(&initPlayerPosition);
}

bool isValidAction(ActionType action){
    bool ret = FALSE;

    switch (action)
    {
    case W:
    case S:
    case D:
    case A:    
        ret = TRUE;
        break;
    
    default:
        break;
    }
    return ret;
}

bool plocPlayer(XYPositionType* pPosition, ActionType action, bool isWall){
    bool ret = FALSE;
    XYPositionType diff;

    if( isWall == TRUE) {
        /* do nothing */
    } else {
        switch (action)
        {
        case W:
            diff = {0, 1};
        case S:
            diff = {0, -1};
        case D:
            diff = {1, 0};
        case A:
            diff = {-1, 0};    
            movePlayerWithDiff(&diff);
            getPlayerPOsition(pPosition);
            ret = TRUE;
            break;
        
        default:
            break;
        }
    }
    return ret;
}
bool P_getPositionOfPl(XYPositionType* pPosition){
    
    getPlayerPOsition(pPosition);

    return TRUE;
}