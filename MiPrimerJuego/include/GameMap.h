#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCelll.h"

class GameMap
{
    public:
        GameMap();

        MapCelll cells[15][10];

        void Draw();

    protected:

    private:
};

#endif // GAMEMAP_H
