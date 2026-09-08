/*
M2T1 - Product Sales (The Apple Orchard with cin)
This is the Apple Sales program from M1LAB again, but this time
the user types in their name and how many apples they want using
cin instead of having the values hard coded.

INPUT: first name, last name, number of apples
PROCESSING: total cost = number of apples * price per apple
OUTPUT: A greeting, the order, and the total cost to 2 decimal places
*/

#include <iostream>
#include <iomanip>  // for setprecision - keeps prices at 2 decimal places
#include <string>
using namespace std;

int main() {

    // set up all the variables
    string first_name, last_name, full_name;  // holds the customer name
    string product = "apples";  // change to whatever you like
    int amount_purchased;
    double cost_each = 0.99;
    double total_cost;

    // greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // calculate total price
    total_cost = amount_purchased * cost_each;

    // formatting - set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // no errors
}
