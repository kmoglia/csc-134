// CSC 134
// M4T1 - While
// Katherine Moglia
// 10/25/2026
// Part 1: say Hello five times with a while loop (Program 5-3)
// Part 2: print a table of numbers and their squares (Program 5-6)

#include <iostream>
using namespace std;

int main()
{

    // Part 1, just say "hi" five times
    int count = 1;
    while (count <= 5) {
        cout << "Hello number " << count << endl;
        count++; // add 1 so the loop eventually stops
    }
    cout << "That's all!" << endl << endl;

    // Part 2, numbers and their squares
    const int MIN_NUMBER = 1;   // Starting number to square
    const int MAX_NUMBER = 10;  // Maximum number to square

    int num = MIN_NUMBER;       // Counter

    // print a table header
    cout << "Number\tNumber Squared" << endl;
    cout << "----------------------" << endl;

    while (num <= MAX_NUMBER) {
        // start at 1 and stop at 10 because of <=
        cout << num << "\t" << (num * num) << endl;
        num++; // Increment the counter
    }

    return 0; // done
}
