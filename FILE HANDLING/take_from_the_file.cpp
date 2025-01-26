#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string line;
    ifstream f;
    f.open("iron_man.txt");

    while (f)
    {
        getline(f, line);
        cout << line << endl;
    }
    f.close();
    return 0;
}