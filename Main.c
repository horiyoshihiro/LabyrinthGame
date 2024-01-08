#include <stdio.h>
#include "Main.h"




void main() {
    init();

    InputType input = systemStart();

    while ( 0 ){

        if ( YES == input ) {
            startGame();
        } else {/* NO == input */
            finishGame();
            break;
        }

    }
}