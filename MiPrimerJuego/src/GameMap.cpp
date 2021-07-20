#include "GameMap.h"

#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
    LoadMapFromFile();
    isGameOver = false;
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

bool GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
    if(cells[PlayerX][PlayerY].IsBlocked() == false)
    {
        if (cells[PlayerX][PlayerY].id == '$')
        {
            DrawVictory();
            isGameOver = true;
            return true;
        }
        else
        {
            if (PlayerCell != NULL)
            {
                PlayerCell->id = 0;
            }
            PlayerCell = &cells[PlayerX][PlayerY];
            PlayerCell->id = 'X';
        }

        return true;
    }
    else
    {
        return false;
    }
}

void GameMap::DrawVictory()
{
    string line;
    ifstream MyFileVic("Victory.txt");

    if (MyFileVic.is_open())
    {
        while(getline(MyFileVic, line))
        {
            cout << line << endl;
        }
        cin >> line;
    }
    else
    {
        cout << "FATAL ERROR: VICTORY COULD NOT BE LOADED :(:(:( !!!!" << endl;
    }
}

void GameMap::DrawIntro()
{
    string line;
    ifstream MyFileIntro("Intro.txt");

    if (MyFileIntro.is_open())
    {
        while(getline(MyFileIntro, line))
        {
            cout << line << endl;
        }
        cin >> line;
    }
    else
    {
        cout << "FATAL ERROR:  INTRO COULD NOT BE LOADED!!!!" << endl;
    }
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
    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!!!!" << endl;
    }
}
