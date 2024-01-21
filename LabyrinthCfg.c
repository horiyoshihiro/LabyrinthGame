#include "LabyrinthCfg.h"


/* 0 equals to way */
/* 1 equals to wall */
/* last line's first element's pos becomes origin{0.0} */
MapType MapOfLaby =   { {1,1,0,0,0},
                        {1,0,0,1,1},
                        {1,0,1,0,1},
                        {1,0,0,0,1},
                        {0,0,1,0,1},};

MapType RevealedMap;

LabyrinthType Labyrinths[NUMOFLABYRINTH] = {
    {
        LabIDType       1(U),
        {0,0},
        {4,4},
        MapOfLaby,
        RevealedMap,
    },
};