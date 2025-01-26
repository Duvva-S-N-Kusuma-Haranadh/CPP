#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int line_no;
    string new_line, filename;
    cout << "Input the file name to be opened: ";
    cin >> filename;
    cout << "Input the content of the new line: ";
    cin >> new_line;
    cout << "Input the line no you want to replace: ";
    cin >> line_no;
    fstream read_file;
    read_file.open(filename);
    if(read_file.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }
    vector<string> lines;
    string line;
    while (getline(read_file, line))
    {
        lines.push_back(line);
    }
    read_file.close();
    if(line_no > lines.size())
    {
        cout << "Error Occurred" << "Line: " << line_no << "Not Found." << endl;
        cout << "File has " << lines.size() << "Lines." << endl;
        return 1;
    }
    ofstream write_file;
    write_file.open(filename);
    if(write_file.fail())
    {

        cout << "Error Opening file." << endl;
        return 0;
    }
    line_no--;
    for(int i = 0; i < lines.size(); i++)
    {
        if(i != line_no)
        {
            write_file << lines[i] << endl;
        }
        else
        {
            write_file << new_line << endl;
        }
    }
    cout << "Replaced Successfully." << endl;
    write_file.close();
    return 0;
}
