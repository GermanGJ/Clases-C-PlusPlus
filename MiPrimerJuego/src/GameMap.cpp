#include "GameMap.h"

#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
    LoadMapFromFile();
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
    PlayerCell->id = 'X';
    cout << "Las coordenadas del jugador estan en: " << PlayerX << "," << PlayerY << endl;
}

void GameMap::LoadMapFromFile()
{
    /*
    ofstream FileCreated("Map.txt");

    if (FileCreated.is_open())
    {

    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED!!!!" << endl;
    }
    */

    string line;
    int row = 0;
    ifstream MyFile("Map.txt");

    if (MyFile.is_open())
    {
        cout << "Prueba Dibujado" <<endl;
        while(getline(MyFile, line))
        {
            for(int p = 0; p < line.length(); p = p + 1)
            {
                if (line[p] == '0')
                {
                    cells[row][p].id = 0;
                }
                else
                {
                    cells[row][p].id = line[p];
                }
            }
            row++;
        }
        cout << "Fin Prueba Dibujado" <<endl;
    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!!!!" << endl;
    }
}
