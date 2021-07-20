#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCelll.h"

class GameMap
{
    public:
        GameMap();

        bool isGameOver = false;

        MapCelll* PlayerCell;
        MapCelll cells[15][10];

        void DrawIntro();
        void DrawVictory();
        void Draw();

        bool SetPlayerCell(int PlayerX, int PlayerY);

    protected:

        void LoadMapFromFile();

    private:
};

#endif // GAMEMAP_H
