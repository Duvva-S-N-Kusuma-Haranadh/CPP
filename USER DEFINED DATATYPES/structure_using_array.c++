// Write a C++ program that will accept the following information for each team in a cricket or a football league.

// General Information
// Team name
// Number of wins
// Number of losses

// For a cricket team, add the following information:
// No. of fours
// No. of sixes
// No. of runs
// No. of ties

// For a football team, add the following information:
// No. of goals
// No. of ties
// No. of penalties

// Step:1
// Enter this information for all of the teams in the league. Then reorder and print the list of teams according to their win-lose records. Store the information in an array of structures, where each array elements (i.e. each structure) contains the information for a single team.

// Make use of a Structure to represent the variable information (either cricket or football) that is included as a part of the structure. This Structure should itself contain two structures, one for cricket – related statistics and the other for football related statistics.

// Note: use enum type in comparing menu options.
// Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

#include <iostream>
using namespace std;

struct cricket
{
    string teamName;
    int wins;
    int losses;

    int fours;
    int sixes;
    int runs;
    int ties;
};

struct football
{
    string teamName;
    int wins;
    int losses;

    int goals;
    int ties;
    int penalties;
};

int main()
{
    cricket c;
    football f;
    int game;
    cout << "CHOOSE ONE\n1.Cricket\t2.Football" << endl;
    cin >> game;
    if (game == 1)
    {
        cout << "Enter Cricket Team Name: ";
        cin >> c.teamName;
        cout << "Enter No. of wins: ";
        cin >> c.wins;
        cout << "Enter No. of losses: ";
        cin >> c.losses;
        cout << "Enter No. of fours by the TEAM - " << c.teamName << ": ";
        cin >> c.fours;
        cout << "Enter No. of sixes by the TEAM - " << c.teamName << ": ";
        cin >> c.sixes;
        cout << "Enter No. of runs by the TEAM - " << c.teamName << ": ";
        cin >> c.runs;
        cout << "Enter No. of ties by the TEAM - " << c.teamName << ": ";
        cin >> c.ties;

        cout << "+----------------+--------------------+" << endl;
        cout << "| Team Name      | " << c.teamName << endl;
        cout << "| No. of Wins    | " << c.wins << endl;
        cout << "| No. of Losses  | " << c.losses << endl;
        cout << "| No. of Fours   | " << c.fours << endl;
        cout << "| No. of Sixes   | " << c.sixes << endl;
        cout << "| No. of Runs    | " << c.runs << endl;
        cout << "| No. of Ties    | " << c.ties << endl;
        cout << "+----------------+--------------------+" << endl;
    }
    if (game == 2)
    {
        cout << "Enter Cricket Team Name: ";
        cin >> f.teamName;
        cout << "Enter No. of wins: ";
        cin >> f.wins;
        cout << "Enter No. of losses: ";
        cin >> f.losses;
        cout << "Enter No. of goals by the TEAM - " << f.teamName << ": ";
        cin >> f.goals;
        cout << "Enter No. of penalties to the TEAM - " << f.teamName << ": ";
        cin >> f.penalties;
        cout << "Enter No. of ties by the TEAM - " << f.teamName << ": ";
        cin >> f.ties;

        cout << "+---------------------+--------------------+" << endl;
        cout << "| Team Name           | " << f.teamName << endl;
        cout << "| No. of Wins         | " << f.wins << endl;
        cout << "| No. of Losses       | " << f.losses << endl;
        cout << "| No. of Goals        | " << f.goals << endl;
        cout << "| No. of Penalties    | " << f.penalties << endl;
        cout << "| No. of Ties         | " << f.ties << endl;
        cout << "+----------------+--------------------+" << endl;
    }
    return 0;
}