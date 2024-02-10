#include "ShowView.h"
#include "Labyrinth.h"

void dis_WelcomeMessage(){
    
}

void dis_StartOrFinish(void){
    printf("Start Game OR Fisinsh Playing Game?\n
                If Start, press 1. If fisnish press 0\n");
}
void dis_LabyrinthAndPlayer(int* arrayOfEle, int numofArryElem){
    char[ (SIZEOFMAP *2 + 1) * SIZEOFMAP + 1 ] disArray; /* see 迷路画面仕様.txt */
    
    for(int i = 0; i < numofArryElem; i++){
        int charPos = i * 2 + i % SIZEOFMAP;

        switch (arrayOfEle[i])
        {
        case INVI_WALL:
            disArray[charPos] = "　";
            break;
        case INVI_WAY:
            disArray[charPos] = "　";
            break;
        case REVL_WALL:
            disArray[charPos] = "■";
            break;
        case REVL_WAY:
            disArray[charPos] = "□";
            break;
        case P_POS:
            disArray[charPos] = "◆";
            break;
        default:
            /* error situation */
            disArray[charPos] = "　";
            break;
        }
        if(i % SIZEOFMAP = 4){
            disArray[charPos + 2] = '\n';
        }
    }

    printf("%s",disArray);
}
void dis_ChooseAction(void){
    printf("進む方向をwasdで選んでください\n");
}