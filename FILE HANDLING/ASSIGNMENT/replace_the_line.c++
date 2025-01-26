#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int line_no;
    string line, new_line, filename;
    fstream file;
    cout << "Input the file name to be opened: ";
    cin >> filename;
    file.open(filename);
    if(file.fail())
    {
        cout << "Error opeining file." << endl;
    }
    /*cout << "Input the content of the new line: ";
    cin >> new_line;
    cout << "Input the line no you want to replace: ";
    cin >> line_no;*/
    vector<string> lines;
    while (getline(file, line))
    {
        lines.push_back(line);
    }

    cout << lines.size();
    return 0;
}
