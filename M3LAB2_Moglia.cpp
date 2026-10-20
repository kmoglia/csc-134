// CSC 134
// M3LAB2
// Katherine Moglia
// 10/19/2026
// Number grade to letter grade conversion
// The user enters a number grade and the program tells them the letter grade

#include <iostream>
using namespace std;

int main() {

// this program converts a number grade (0-100) into a letter grade
// test values: 100, 90, 89.5, 85, 80, 79, 70, 69, 60, 59, 0, -5, 105

// Variables
double grade;     // the number grade the user enters
char letter;      // the letter grade we figure out

// ask for the grade
cout << "Enter your numerical grade: ";
cin >> grade;

// make sure the grade is in range before checking letters
if (grade < 0 || grade > 100) {
    cout << "Invalid grade. Please enter a number from 0 to 100." << endl;
    return 1; // exit early, bad input
}

// figure out the letter grade using ranges
if (grade >= 90 && grade <= 100) {
    letter = 'A';
}
else if (grade >= 80 && grade < 90) {
    letter = 'B';
}
else if (grade >= 70 && grade < 80) {
    letter = 'C';
}
else if (grade >= 60 && grade < 70) {
    letter = 'D';
}
else {
    letter = 'F'; // anything 0 - 59
}

// show the result
cout << "Your letter grade is: " << letter << endl;

return 0; // no errors
}
