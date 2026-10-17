// CSC 134
// M3T2
// Katherine Moglia
// 10/17/2026
// Craps - roll two dice and follow the flowchart
// Win, lose, or set the point and keep rolling

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {

// Seed the random numbers
srand(time(0));

// Variables
int die1, die2, sum;
int point = 0;
string odds = "";

cout << "Let's play some Craps!" << endl;
cout << "Press Enter to roll the dice...";
cin.get();

// Roll two dice (1-6 each)
die1 = (rand() % 6) + 1;
die2 = (rand() % 6) + 1;
sum = die1 + die2;

cout << "You rolled a " << die1 << " and a " << die2 << endl;
cout << "Total: " << sum << endl;
cout << endl;

// Go down the flowchart
if (sum == 2 || sum == 3 || sum == 12) {
    cout << "Craps! You lose." << endl;
}
else if (sum == 4 || sum == 10) {
    point = sum;
    odds = "2/1";
    cout << "Your point is " << point << " (odds " << odds << ")" << endl;
}
else if (sum == 5 || sum == 9) {
    point = sum;
    odds = "3/2";
    cout << "Your point is " << point << " (odds " << odds << ")" << endl;
}
else if (sum == 6 || sum == 8) {
    point = sum;
    odds = "6/5";
    cout << "Your point is " << point << " (odds " << odds << ")" << endl;
}
else if (sum == 7 || sum == 11) {
    cout << "Natural! You win!" << endl;
}
else {
    // shouldn't ever get here with two dice
    cout << "Error - something went wrong with the roll." << endl;
}

// Point round - keep rolling until you hit the point or a 7
if (point != 0) {
    cout << endl;
    cout << "Now you need to roll a " << point << " again before a 7." << endl;

    bool done = false;
    while (!done) {
        cout << "Press Enter to roll...";
        cin.get();

        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;
        sum = die1 + die2;

        cout << "You rolled a " << die1 << " and a " << die2 << " = " << sum << endl;

        if (sum == point) {
            cout << "You hit your point! You win!" << endl;
            done = true;
        }
        else if (sum == 7) {
            cout << "Seven out. You lose." << endl;
            done = true;
        }
    }
}

cout << endl;
cout << "Thanks for playing!" << endl;

return 0; // no errors
}
