/*
CSC 134
M2T2 - Receipt Calculator
Katherine Moglia
9/27/2026
*/

#include <iostream>
#include <iomanip> // for setprecision - keeps prices at 2 decimal places
#include <string>
using namespace std;

int main() {
// Purpose - print a simple receipt for one meal
// that also adds 8% sales tax

// Declare our variables
string item = "Chicken Tenders";
double meal_price = 5.99;
double tax_percent = 0.08; // 8% is 8/100
double tax_amount; // tax in $
double total; // meal price + tax

// Greet the customer and take the order
cout << "Welcome to the CSC 134 Cafe!" << endl;
cout << "You ordered one " << item << "." << endl;

// Calculate the sales tax and the total price
tax_amount = meal_price * tax_percent; // 8% of the meal
total = meal_price + tax_amount;

// Print the receipt
cout << setprecision(2) << fixed;
cout << endl;
cout << "------------------------------" << endl;
cout << item << "\t$" << meal_price << endl;
cout << "Tax (8%)" << "\t$" << tax_amount << endl;
cout << "------------------------------" << endl;
cout << "Total" << "\t\t$" << total << endl;
cout << endl;
cout << "Thanks for eating with us!" << endl;

return 0; // no errors
}
