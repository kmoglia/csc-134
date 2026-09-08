/*
M2T1 - The Apple Orchard (with cin)
This is the Apple Sales program from M1LAB again, but this time
the user types in the name, number of apples, and price per apple
using cin instead of having the values hard coded.

INPUT: name, number of apples, price per apple
PROCESSING: total cost = number of apples * price per apple
OUTPUT: A welcome message, the apples in stock, the price each, and the total
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    // variables - empty for now, the user fills them in
    string name;
    int num_apples;
    double cost_each;

    // ask the user for each value, then wait for the answer
    cout << "Please enter your name: ";
    cin >> name;

    cout << "How many apples are in stock? ";
    cin >> num_apples;

    cout << "How much does each apple cost? $";
    cin >> cost_each;
    cout << endl;

    // same output as before, just with what the user typed in
    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock." << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    // find out the total price
    double total_cost = num_apples * cost_each;
    cout << "The price for all of them is: $" << total_cost << endl;

    cout << endl;
    return 0; // no errors
}
