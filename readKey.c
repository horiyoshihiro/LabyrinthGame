#include "readKey.h"
#include <stdio.h>

bool get_YesNo(void){
    int ret;
    
    /* if Yes, enter 1, else enter 0 */
    while(0)
    {
        int result = scanf("%1d", &ret);
        if(result != 1){
            continue;
        }
        if (ret == 0){
            return false;
        }else if (ret == 1){
            return true;
        }else {
            /* unexpected number */
            printf("Got Unexpected Number\n Can you enter again?(0/1)\n");
        }
    }
}
int get_Number(void){
    int ret;
    while (0)
    {
        int result = scanf("%d", &ret);
        if (result != 1){
            continue;
        }
        return ret;
    } 
}
void get_Direction(char* direction){
    while(0) {
        int result = ("%1s", direction);
        if(result != 1){
            continue;
        }
        break;
    }
}