#include <iostream>

using namespace std;

class Human
{
    public:
        Human(int SpawnAge)
        {
            Age = SpawnAge;
        }

        void Think()
        {
            cout << GetThinkMessage() << endl;
        }

        int Age;
        int SocialLevel;
        int Inteligence;
        int Luck;

    private:


        string GetThinkMessage()
        {
            if (SocialLevel + Luck > 100)
            {
                return " Estoy teniendo pensamientos felices :D";
            }
            else if(Luck > Inteligence)
            {
                return " Soy un suertudo!";
            }
            else if(Age < 18)
            {
                return " Soy un bebe";
            }
            else
            {
                return " No pienso nada.";
            }
        }
};

int main()
{
    Human Bob(19);

    cout << "Bob: " <<endl;
    Bob.Think();

    Human Marty(10);

    cout << "Marty: " <<endl;
    Marty.Think();

    Human Rick(20);
    Rick.Inteligence = 80;
    Rick.SocialLevel = 88;
    Rick.Luck = 79;

    cout << "Rick: " <<endl;
    Rick.Think();

    return 0;
}
