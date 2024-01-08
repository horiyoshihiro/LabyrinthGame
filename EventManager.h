#include <stdio.h>
#include "Timer.h"

/* Prototype declaration */
extern void init();
extern InputType systemStart();
extern void startGame();
extern void finishGame();

/* Type declaration */
#define InputType     unsigned int
#define NORTHHEADING  200
#define EASTHEADING   201
#define SOUTHHEADIING 202
#define WESTHEADING   203
#define YES           300
#define NO            301