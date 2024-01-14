#include "Player.h"
#include "PlayerCfg,h"
#include "Util.h"

#define NORTHHEADING    (ActionType)200   /*w*/
#define EASTHEADING     (ActionType)201   /*d*/
#define SOUTHHEADIING   (ActionType)202   /*s*/
#define WESTHEADING     (ActionType)203   /*a*/

typedef ActionType      unsigned int;

extern void setPlayer();
extern bool isValidAction(ActionType* action);
extern XYPositionType* plocPlayer(XYPositionType* pPosition, bool isWall);
extern bool P_getPositionOfPl(XYPositionType* pPosition);