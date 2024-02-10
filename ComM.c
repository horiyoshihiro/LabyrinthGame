#include "ComM.h"

void showWelcomView(){
    dis_WelcomeMessage();
}

bool askStartORFinishGame(){
    dis_StartOrFinish();
    bool ans = get_YesNo();
    return ans;
}
int chooseIDOfLabyrinth(){
    for(int i = 0; i < NUMOFLABYRINTH; i++){
        LevelType difficulty  = getInfoOfLab(i);
        dis_InfoOfLabyrinth(i, difficulty);
    }
    unsigned int labId = get_Number();
    return (LabIDType)labId; 
}
void showPlayigLabyrinth(MapType* originalMap, Maptype* revealedMap, XYPositionType* playerPos){
    int arrayOfLabEle[SIZEOFMAP * SIZEOFMAP];
    int numofArryElem = SIZEOFMAP * SIZEOFMAP;
    if ( (revealedMap == NULL) || (playerPos == NULL)){

    }else {
        bool ret =  mapToPrimitiveArray(originalMap, revealedMap, arrayOfLabEle);
        dis_LabyrinthAndPlayer(arrayOfLabEle, numofArryElem);
    } 
}

void getPlayerAction(ActionType* actionPtr){
    char[] direction = 'o'; /* Origin */

    if ( actionPtr == NULL){
        return;
    }
    dis_ChooseAction();
    get_Direction(&direction);
    switch (direction)
    {
    case 'w':
        *actionPtr = W;
        break;
    case 's':
        *actionPtr = S;
        break;
    case 'd':
        *actionPtr = D;
        break;
    case 'a':
        *actionPtr = A;
        break;
    default:
        /*failed to get value */
        *actionPtr = INVALIDE_ACTION;
        break;
    }
}

bool mapToPrimitiveArray(MapType* oriMap, MapType* rvlMap, int* arrayHeaderPtr){ 
    int arrayIndex = 0;
    for(int i = 0; i < SIZEOFMAP; i++){
        for(int j = 0; j < SIZEOFMAP; j++){
            if (rvlMap[i][j] == 0 ) {
                /* not revealed */
                if(oriMap[i][j] == WALL){
                    arrayHeaderPtr[arrayIndex] = REVL_WALL;
                }else{
                    arrayHeaderPtr[arrayIndex] = REVL_WAY;
                }
            }else {
                /* reveald */
                if(oriMap[i][j] == WALL){
                    arrayHeaderPtr[arrayIndex] = INVI_WALL;
                }else{
                    arrayHeaderPtr[arrayIndex] = INVI_WAY;
                }
            }
            arrayIndex++;
        }
    }
    return true;
}