#include <stdio.h>
#include "Timer.h"
#include "LabyrinthManager.h"
#include "PlayerManager.h"
#include "ComM.h"
#include "Util.h"

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