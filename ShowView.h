#ifndef __SHOWVIEW
#define __SHOWVIEW

#include "Util.h"

typedef unsigned int MapEleType;

#define INVI_WALL   (MapEleType)201
#define INVI_WAY    (MapEleType)202
#define REVL_WALL   (MapEleType)203
#define REVL_WAY    (MapEleType)204
#define P_POS       (MapEleType)205



extern void dis_StartOrFinish(void);
extern void dis_LabyrinthAndPlayer(int* arrayOfEle, int numofArryElem);
extern void dis_ChooseAction(void);
#endif