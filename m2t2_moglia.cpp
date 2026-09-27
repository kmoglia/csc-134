/*
CSC 134
M2T2 - Receipt Calculator
Katherine Moglia
9/27/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    double meal_price = 5.99;
    double tax_percent = 0.08;   // 8% tax
    double tax_amount;
    double total;

    // Calculate the values
    tax_amount = meal_price * tax_percent;
    total = meal_price + tax_amount;

    // Print the results
    cout << fixed << setprecision(2);
    cout << "========================" << endl;
    cout << "    Restaurant Receipt  " << endl;
    cout << "========================" << endl;
    cout << "Meal Price: $" << meal_price << endl;
    cout << "Tax (8%):   $" << tax_amount << endl;
    cout << "------------------------" << endl;
    cout << "Total:      $" << total << endl;
    cout << "========================" << endl;
    cout << "Thank you, come again!" << endl;

    return 0;
}
