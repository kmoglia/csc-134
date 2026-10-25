// CSC 134
// M4T1
// Katherine Moglia
// 10/25/2026
// Program 5-3: say Hello 5 times with a while loop
// Program 5-6: print a table of numbers and their squares

#include <iostream>
using namespace std;

int main() {

// Part 1 - Program 5-3
int number = 0;

while (number < 5) {
    cout << "Hello\n";
    number++;
}
cout << "That's all!\n\n";

// Part 2 - Program 5-6
const int MIN_NUMBER = 1,   // Starting number to square
          MAX_NUMBER = 10;  // Maximum number to square

int num = MIN_NUMBER;       // Counter

cout << "Number\t\tNumber Squared\n";
cout << "------------------------------\n";

while (num <= MAX_NUMBER) {
    cout << num << "\t\t" << (num * num) << endl;
    num++; // Increment the counter
}

return 0; // no errors
}
