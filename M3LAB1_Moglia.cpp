// CSC 134
// M3LAB1
// Katherine Moglia
// 10/17/2026
// Choices with the if statement
// The user runs into a bear in the woods and has to decide what to do

#include <iostream>
#include <string>
using namespace std;

int main() {

// this program asks the user what they want to do and responds to it
// test values: fight, run, hide, banana

// Variables
string choice;

// set the scene
cout << "You're out hiking and a bear steps onto the trail in front of you." << endl;
cout << "It hasn't seen you yet." << endl;
cout << endl;

// ask the question
cout << "Do you fight, run, or hide?" << endl;
cout << "Type fight, run, or hide: ";
cin >> choice;
cout << endl;

// make a decision based on the user's choice
if (choice == "fight") {
    cout << "You chose to fight." << endl;
    cout << "Bad idea. The bear wins and you limp back to the car." << endl;
}
else if (choice == "run") {
    cout << "You chose to run." << endl;
    cout << "The bear hears you and chases you, but you make it back to the trailhead!" << endl;
}
else if (choice == "hide") {
    cout << "You chose to hide." << endl;
    cout << "You duck behind a tree and wait. The bear wanders off. You survived!" << endl;
}
else {
    cout << "I'm sorry, that is not a valid choice." << endl;
}

// finish up
cout << "Thanks for playing!" << endl; // this runs no matter what they choose

return 0; // no errors
}
