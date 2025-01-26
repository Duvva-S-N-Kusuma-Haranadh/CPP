#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ofstream f;
    f.open("iron_man.txt");

    cout << "Enter the text to store it in iron_man.txt:" << endl;
    while (f)
    {
        getline(cin, line);
        if (line == "-1")
        {
            break;
        }
        f << line << endl;
    }
    f.close();
    return 0;
}