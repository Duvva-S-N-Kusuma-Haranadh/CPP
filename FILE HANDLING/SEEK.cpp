#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;
    fstream file;
    file.open("iron_man.txt", ios::in);
    while(file)
    {
        getline(file, line);
        cout << line;
    }
    cout << file.tellg();
    return 0;
}
