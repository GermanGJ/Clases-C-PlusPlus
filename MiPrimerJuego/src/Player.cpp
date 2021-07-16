#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    //ctor
    x = 1;
    y = 1;
}

void Player::CallInput()
{
    char UserInput = ' ';

    cin >> UserInput;

    switch(UserInput)
    {
        case 'w':
            x = x - 1;
            cout << "El jugador se mueve ARRIBA!!" << endl;
            break;

        case 's':
            x = x + 1;
            cout << "El jugador se mueve ABAJO!!" << endl;
            break;

        case 'd':
            y = y + 1;
            cout << "El jugador se mueve DERECHA!!" << endl;
            break;

        case 'a':
            y = y - 1;
            cout << "El jugador se mueve IZQUIERDA!!" << endl;
            break;
    }

    cout << "Mi jugador esta en las coordenadas: " << x << "," << y << endl;
}
