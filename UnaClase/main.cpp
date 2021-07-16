#include <iostream>

using namespace std;

class Cat
{
    public:
        string Name;

    Cat()
    {
        Name = "Guapo";
    }
    Cat(string iName)
    {
        Name = iName;
    }

    void Meow()
    {
        cout << Name << " dice meow" << endl;
    }
};

int main()
{
    Cat MyFirstKitty;
    Cat MySecondKitty("Toriel");

    cout << MyFirstKitty.Name << endl;
    cout << MySecondKitty.Name << endl;

    MyFirstKitty.Meow();
    MySecondKitty.Meow();

    return 0;
}
