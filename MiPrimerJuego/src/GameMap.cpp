#include "GameMap.h"

#include <iostream>

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
}

void GameMap::Draw()
{
    for(int i = 0; i < 15; i = i + 1)
    {
        for(int p = 0; p < 10; p = p + 1)
        {
            cout << cells[i][p].id;
        }

        cout << endl;
    }
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
    if (PlayerCell != NULL)
    {
        PlayerCell->id = 0;
    }

    PlayerCell = &cells[PlayerX][PlayerY];
    PlayerCell->id = 3;
    cout << "Las coordenadas del jugador estan en: " << PlayerX << "," << PlayerY << endl;
}
