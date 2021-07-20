#include <iostream>
#include "Player.h"
#include "MapCelll.h"
#include "GameMap.h"

using namespace std;

int main()
{
    GameMap Map;
    Player Hero;

    Map.DrawIntro();

    while (Map.isGameOver == false)
    {
        cout << "Introduce el comando de movimiento 'w''a''s''d': " << endl;
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
