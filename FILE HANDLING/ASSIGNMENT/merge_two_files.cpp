// Question 3: Write a program in C to merge two files and write it in a new file.
// Assume that the content of the file test.txt and test1.txt is:
// The content of the file test.txt is:
// This is the file test.txt
// The content of the file test1.txt is:
// This is the file test1.txt
// Test Data:
// Input the 1st file name : test.txt
// Input the 2nd file name : test1.txt
// Input the new file name where to merge the above two files: mergefiles.txt
// Expected Output:
// The two files merged into mergefiles.txt file successfully!
// Here is the content of the merge file mergefiles.txt:
// The content of the file mergefiles.txt is:
// This is the file test.txt.
// This is the file test1.txt

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename1, newfile, filename2, line1, line2;
    ifstream f1, f2;
    fstream f3;
    cout << "Input the first filename: ";
    cin >> filename1;
    cout << "Input the second filename: ";
    cin >> filename2;
    f1.open(filename1);
    f2.open(filename2);
    cout << "Input the new file name where to manage the above two files:";
    cin >> newfile;
    f3.open(newfile, ios::app);
    if (!f1 || !f2)
    {
        cout << "File not found!" << endl;
        return 1;
    }

    while (getline(f1, line1))
    {
        f3 << line1 << endl;
    }
    f3 << endl;
    while (getline(f2, line2))
    {
        f3 << line2 << endl;
    }
    f1.close();
    f2.close();
    f3.close();
    cout << "Successfully merged the contents of " << filename1 << " and " << filename2 << " into the file new_file.txt" << endl;
}