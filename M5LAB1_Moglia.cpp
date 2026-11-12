#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Katherine Moglia
11/12/2026
A simple story told with void functions.
The user makes choices and each choice
calls a different function.
*/

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// new choices
void choice_open_window();
void choice_check_shed();
void choice_go_upstairs();
void choice_go_basement();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Simple menu that lets the user choose 1, 2, or 3, or 4 to quit.
  cout << endl;
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();            // reset cin if they typed a letter
    cin.ignore(1000, '\n'); // clear the user input
    main_menu();            // try again
  }
}

// FUNCTION DEFINITIONS

void choice_front_door() {
  cout << endl;
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    choice_front_door();
  }
}

void choice_back_door() {
  cout << endl;
  cout << "You sneak around to the back of the house." << endl;
  cout << "The back door is boarded up, but there's a window" << endl;
  cout << "cracked open and an old shed out in the yard." << endl;
  cout << "Do you:" << endl;
  cout << "1. Climb in through the window" << endl;
  cout << "2. Check out the shed" << endl;
  cout << "3. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_open_window();
  } else if (2 == choice) {
    choice_check_shed();
  } else if (3 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    choice_back_door();
  }
}

void choice_go_home() {
  cout << endl;
  cout << "You decide the house isn't worth it and walk home." << endl;
  cout << "You never find out what was inside." << endl;
  cout << "THE END" << endl;
}

void choice_open_window() {
  cout << endl;
  cout << "You push the window up and climb inside." << endl;
  cout << "You're standing in a dusty kitchen. There's a staircase" << endl;
  cout << "going up, and a door that leads down to the basement." << endl;
  cout << "Do you:" << endl;
  cout << "1. Go upstairs" << endl;
  cout << "2. Go down to the basement" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_go_upstairs();
  } else if (2 == choice) {
    choice_go_basement();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    choice_open_window();
  }
}

void choice_check_shed() {
  cout << endl;
  cout << "You walk over to the shed and pull the door open." << endl;
  cout << "Inside there's a rusty lawnmower and a key hanging on a nail." << endl;
  cout << "The key looks like it fits the front door." << endl;
  cout << "Do you:" << endl;
  cout << "1. Take the key and go inside the house" << endl;
  cout << "2. Leave it and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "You unlock the front door and step inside." << endl;
    cout << "The stairs are right in front of you." << endl;
    choice_go_upstairs();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    choice_check_shed();
  }
}

void choice_go_upstairs() {
  cout << endl;
  cout << "You head up the stairs. Every step creaks." << endl;
  cout << "At the top there's a bedroom with an old trunk in it." << endl;
  cout << "You open the trunk and it's full of gold coins." << endl;
  cout << "You win!" << endl;
  cout << "THE END" << endl;
}

void choice_go_basement() {
  cout << endl;
  cout << "You open the basement door and start down the steps." << endl;
  cout << "The door slams shut behind you and the light goes out." << endl;
  cout << "Something is moving down there with you..." << endl;
  cout << "GAME OVER" << endl;
}
