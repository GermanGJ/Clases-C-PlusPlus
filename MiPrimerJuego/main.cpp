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

        if(Map.SetPlayerCell(Hero.x, Hero.y))
        {
            Map.Draw();
        }
        else
        {
            Hero.ResetToSafePosition();
            Map.Draw();
        }


    }

    return 0;
}
