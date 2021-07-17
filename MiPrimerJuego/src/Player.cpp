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
            lastX = x;
            x = x - 1;
            break;

        case 's':
            lastX = x;
            x = x + 1;
            break;

        case 'd':
            lastY = y;
            y = y + 1;
            break;

        case 'a':
            lastY = y;
            y = y - 1;
            break;
    }
}

void Player::ResetToSafePosition()
{
    x = lastX;
    y = lastY;
}
