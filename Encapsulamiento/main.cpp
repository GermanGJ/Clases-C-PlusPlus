#include <iostream>

using namespace std;

class Dog
{
    private:
        string mName;

    public:
        string mBark;

    Dog(string Name, string BarType)
    {
        mName = Name;
        mBark = BarType;
    }

    string GetName()
    {
        return mName;
    }
};

int main()
{
    Dog PerroUno("Woofers","berk");

    cout << PerroUno.GetName() << endl;

    return 0;
}
