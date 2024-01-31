#include "LabyrinthCfg.h"


/* 0 equals to way */
/* WALL equals to wall */
/* last line's first element's pos becomes origin{0.0} */
MapType MapOfLaby =   { {WALL,WALL,WAY,WAY,WAY},
                        {WALL,WAY,WAY,WALL,WALL},
                        {WALL,WAY,WALL,WAY,WALL},
                        {WALL,WAY,WAY,WAY,WALL},
                        {WAY,WAY,WALL,WAY,WALL},};

MapType RevealedMap;

LabyrinthType Labyrinths[NUMOFLABYRINTH] = {
    {
        LabIDType       WALL(U),
        {0,0},
        {4,4},
        MapOfLaby,
        RevealedMap,
    },
};
