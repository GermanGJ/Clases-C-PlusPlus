#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        int x, y;
        int lastX, lastY;

        Player();

        void CallInput();
        void ResetToSafePosition();

    protected:


    private:
};

#endif // PLAYER_H
