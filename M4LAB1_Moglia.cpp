// CSC 134
// M4LAB1
// Katherine Moglia
// 10/29/2026
// Nested loops
// Draw a block of asterisks based on the height and width the user enters

#include <iostream>
using namespace std;

int main() {

// this program draws a block of asterisks using nested for loops
// test values: 5 by 5, 3 by 7, 1 by 1

// Variables
int height, width;

cout << "M4LAB1" << endl;
cout << endl;

// get the size from the user
cout << "Enter the height of the block: ";
cin >> height;
cout << "Enter the width of the block: ";
cin >> width;
cout << endl;

// test: make one row of asterisks
cout << "One row" << endl;
for (int j = 0; j < width; j++) {
    cout << "*" << " ";
}
cout << endl; // finish the row
cout << endl;

// test: make one column of asterisks
cout << "One column" << endl;
for (int i = 0; i < height; i++) {
    cout << "*" << endl;
}
cout << endl;

// instead of printing a column, we print a whole row each time
// through the outer loop (nested loops)
cout << "The entire block" << endl;
for (int i = 0; i < height; i++) {
    // print one row
    for (int j = 0; j < width; j++) {
        cout << "*" << " ";
    }
    cout << endl; // end the row with a newline
}

return 0; // no errors
}
