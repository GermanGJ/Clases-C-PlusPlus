#include <iostream>
#include "Player.h"
#include "MapCelll.h"
#include "GameMap.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    cout << "Inicia el Juego!!!!" << endl;

    while (isGameOver == false)
    {
        Hero.CallInput();
        Map.Draw();
    }

    return 0;
}
