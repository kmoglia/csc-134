// CSC 134
// M4HW1 - Gold
// Moglia
// 11/5/2026
// Prints a times table for a number the user picks (1 to 12).
// Uses input validation so the user has to enter a valid number.

#include <iostream>
using namespace std;

int main() {

  // declare variables
  int firstNum, answer;
  int i = 1;  // loop counter, goes from 1 to 12

  // ask the user for a number
  cout << "Enter a number from 1 to 12? ";
  cin >> firstNum;

  // input validation - keep asking until it's between 1 and 12
  while (firstNum < 1 || firstNum > 12) {
    cout << "Invalid number. Please enter a number from 1 to 12: ";
    cin >> firstNum;
  }

  // print the times table
  while (i <= 12) {
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << "." << endl;
    i++;
  }

  return 0;
}
