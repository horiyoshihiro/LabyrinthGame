#include <stdio.h>
#include "Timer.h"

/* Prototype declaration */
extern void init();
extern void startGame();
extern void finishGame();

/* Type declaration */
#define NORTHHEADING  200   /*w*/
#define EASTHEADING   201   /*d*/
#define SOUTHHEADIING 202   /*s*/
#define WESTHEADING   203   /*a*/
#define YES           300
#define NO            301