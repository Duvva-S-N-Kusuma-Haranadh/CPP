// Question 1: Write a program in C to Find the Number of Lines in a Text File.
// Test Data: Input the file name to be opened: test.txt
// Expected Output: The lines in the file test.txt are: 4

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line, filename;
    int count = 0;
    ifstream f;
    cout << "Enter the filename to be opened: ";
    cin >> filename;
    f.open(filename);
    if (!f)
    {
        cout << "File not found!" << endl;
        return 1;
    }
    while (getline(f, line))
    {
        count++;
    }
    f.close();
    cout << "Number of lines in the file " << filename << " are : " << count << endl;
}