#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("GameData.txt");

    if(MyFile.is_open())
    {
        MyFile << "Hola 2GJ!!!!" << endl;

        for(int i = 0; i < 10; i++)
        {
            MyFile << i << endl;
        }

        MyFile << "Hola Platzi!" << endl;
        MyFile << "Mi nombre es:" << endl;
        MyFile << "2GJ" << endl;
    }

    MyFile.close();


    ifstream MyFileRead("GameData.txt");
    string line;

    if(MyFileRead.is_open())
    {
        while(getline(MyFileRead, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "No logre abrir mi archivo, checar el antivirus!!!" << endl;
    }

    return 0;
}
