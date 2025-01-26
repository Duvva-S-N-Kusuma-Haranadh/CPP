// Question 2: Write a program in C to copy a file in another name.
// Assume that the content of the file test.txt is:
// test line 1
// test line 2
// test line 3
// test line 4
// test line 5
// Test Data:
// Input the source file name: test.txt
// Input the new file name: test1.txt
// Expected Output:
// The file test.txt copied successfully in the file test1.txt.
// If you read the new file you will see the content of the file:
// test line 1
// test line 2
// test line 3
// test line 4
// test line 5

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line, s_file, d_file;
    ifstream fin;
    ofstream fout;
    cout << "Input Source filename: ";
    cin >> s_file;
    cout << "Input Destination filename: ";
    cin >> d_file;
    fin.open(s_file);
    if (!fin)
    {
        cout << "File not found!" << endl;
        return 1;
    }
    fout.open(d_file);

    while (getline(fin, line))
    {
        fout << line << endl;
    }
    fin.close();
    fout.close();
    cout << "Successfully Copied Contents from " << s_file << " to " << d_file << endl;
    return 0;
}