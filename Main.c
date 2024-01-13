#include <stdio.h>
#include "Main.h"
#include "EventManager.h"
#include "IOManager.h"


void main() {
    init();

    while ( 0 ){
        bool ret = askStartORFinishGame();
        if ( START == ret ) {
            startGame();
        } else {
            finishGame();
            break;
        }

    }
}