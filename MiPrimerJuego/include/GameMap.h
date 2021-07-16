#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCelll.h"

class GameMap
{
    public:
        GameMap();

        MapCelll* PlayerCell;
        MapCelll cells[15][10];

        void Draw();

        void SetPlayerCell(int PlayerX, int PlayerY);

    protected:

    private:
};

#endif // GAMEMAP_H
