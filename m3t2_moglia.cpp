// CSC 134
// M3T2
// Katherine Moglia
// 10/17/2026
// Craps - roll two dice and follow the flowchart
// Win, lose, or set the point and keep rolling

#include <iostream>
#include <cstdlib>  // for random numbers
#include <ctime>    // for seeding with the time
#include <string>
using namespace std;

int main() {

cout << "Let's play some Craps!" << endl;

// Seed the random numbers
int seed = time(0);
srand(seed);

// Variables
const int MAX = 6; // dice go from 1-6
int roll1, roll2, total;
int point = 0;
string odds = "";

cout << "Press Enter to roll the dice...";
cin.get();

// Roll the dice
roll1 = (rand() % MAX) + 1;
roll2 = (rand() % MAX) + 1;
total = roll1 + roll2;

cout << "Your first roll was: " << roll1 << endl;
cout << "Your second roll was: " << roll2 << endl;
cout << "Your total roll is: " << total << endl;
cout << endl;

// Let's play craps!
// 7 and 11 - win!
// 2, 3 and 12 - lose.
// anything else is your point
if (total == 7) {
    cout << "Lucky seven! You win!" << endl;
}
else if (total == 11) {
    cout << "Eleven is a winner!" << endl;
}
else if (total == 2) {
    cout << "Snake eyes! Too bad, you lose." << endl;
}
else if (total == 3) {
    cout << "Sorry, three is unlucky, you lose." << endl;
}
else if (total == 12) {
    cout << "Boxcars! Sorry, you lost." << endl;
}
else if (total == 4 || total == 10) {
    point = total;
    odds = "2/1";
}
else if (total == 5 || total == 9) {
    point = total;
    odds = "3/2";
}
else if (total == 6 || total == 8) {
    point = total;
    odds = "6/5";
}
else {
    // shouldn't ever get here with two dice
    cout << "Error - something went wrong with the roll." << endl;
}

// Point round - keep rolling until you hit the point or a 7
if (point != 0) {
    cout << "Your point is " << point << " (odds " << odds << ")" << endl;
    cout << "Now you need to roll a " << point << " again before a 7." << endl;
    cout << endl;

    bool done = false;
    while (!done) {
        cout << "Press Enter to roll...";
        cin.get();

        roll1 = (rand() % MAX) + 1;
        roll2 = (rand() % MAX) + 1;
        total = roll1 + roll2;

        cout << "You rolled " << roll1 << " and " << roll2 << " for a total of " << total << endl;

        if (total == point) {
            cout << "You hit your point! You win!" << endl;
            done = true;
        }
        else if (total == 7) {
            cout << "Seven out. Sorry, you lose." << endl;
            done = true;
        }
    }
}

cout << endl;
cout << "Thanks for playing!" << endl;

return 0; // no errors
}
