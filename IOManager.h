#include "Util.h"
#include "readKey.h"
#include "ShowView.h"

extern bool askStartORFinishGame();

/* Type declaration */
#define ActionType      unsigned int
#define START           TRUE
#define FINISH          FALSE
#define NORTHHEADING    (ActionType)200   /*w*/
#define EASTHEADING     (ActionType)201   /*d*/
#define SOUTHHEADIING   (ActionType)202   /*s*/
#define WESTHEADING     (ActionType)203   /*a*/
#define YES             (ActionType)300
#define NO              (ActionType)301