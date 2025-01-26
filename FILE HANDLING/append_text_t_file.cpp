#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    fstream f;
    f.open("iron_man.txt", ios::app);
    cout << "Enter the Text to append to the file:" << endl;
    while (f)
    {
        getline(cin, s);
        if (s == "-1")
        {
            break;
        }
        f << s << endl;
    }
    f.close();
    return 0;
}