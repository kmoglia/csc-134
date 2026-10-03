/*
CSC 134
M2HW1 - Gold
Katherine Moglia
10/2/2026
*/

// This program answers all four M2HW1 questions in one program.
// Each section is labeled with a cout statement so the output
// is easy to follow.

#include <iostream>
#include <iomanip> // for setprecision
#include <string>  // for string and getline
using namespace std;

int main() {
    // Set the desired output formatting for money amounts.
    cout << setprecision(2) << fixed << showpoint;

    // ==========================================================
    // Question 1 - Banking Transactions
    // ==========================================================
    cout << "==============================" << endl;
    cout << "Question 1 - Banking Transactions" << endl;
    cout << "==============================" << endl;

    // Constant for the account number
    const int ACCOUNT_NUMBER = 1047382;

    // Variables
    string name;           // The name on the account
    double startBalance,   // The starting account balance
           deposit,        // The amount of the deposit
           withdrawal,     // The amount of the withdrawal
           finalBalance;   // The final account balance

    // Step 1 - Get the user's information
    // getline lets the name contain spaces (first and last name)
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter the starting account balance: $";
    cin >> startBalance;
    cout << "Enter the amount of the deposit: $";
    cin >> deposit;
    cout << "Enter the amount of the withdrawal: $";
    cin >> withdrawal;

    // Step 2 - Calculate the final balance
    finalBalance = startBalance + deposit - withdrawal;

    // Step 3 - Display the account information
    cout << endl;
    cout << "Name on the account: " << name << endl;
    cout << "Account number: " << ACCOUNT_NUMBER << endl;
    cout << "Starting balance: $" << startBalance << endl;
    cout << "Deposit: $" << deposit << endl;
    cout << "Withdrawal: $" << withdrawal << endl;
    cout << "Final account balance: $" << finalBalance << endl;
    cout << endl;

    // ==========================================================
    // Question 2 - General Crates (Updated M2LAB1)
    // ==========================================================
    cout << "==============================" << endl;
    cout << "Question 2 - General Crates" << endl;
    cout << "==============================" << endl;

    // Updated constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.30;   // was 0.23
    const double CHARGE_PER_CUBIC_FOOT = 0.52; // was 0.5

    // Variables
    double length, // The crate's length
    width,         // The crate's width
    height,        // The crate's height
    volume,        // The volume of the crate
    cost,          // The cost to build the crate
    charge,        // The customer charge for the crate
    profit;        // The profit made on the crate

    // Step 1 - Get the crate dimensions
    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Step 2 - Calculate the crate's volume, the cost to produce it,
    // the charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Step 3 - Display the calculated data.
    cout << endl;
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    cout << endl;

    // ==========================================================
    // Question 3 - Pizza Party
    // ==========================================================
    cout << "==============================" << endl;
    cout << "Question 3 - Pizza Party" << endl;
    cout << "==============================" << endl;

    // Constant for how many slices each visitor gets
    const int SLICES_PER_VISITOR = 3;

    // Variables
    int pizzas,          // The number of pizzas ordered
        slicesPerPizza,  // The number of slices in each pizza
        visitors,        // The number of visitors coming
        totalSlices,     // The total number of slices
        slicesEaten,     // The number of slices the visitors eat
        leftoverSlices;  // The number of slices left over

    // Step 1 - Get the party information
    cout << "How many pizzas did you order? ";
    cin >> pizzas;
    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors are coming? ";
    cin >> visitors;

    // Step 2 - Calculate the leftover slices
    totalSlices = pizzas * slicesPerPizza;
    slicesEaten = visitors * SLICES_PER_VISITOR;
    leftoverSlices = totalSlices - slicesEaten;

    // Step 3 - Display the results
    cout << endl;
    cout << "Total slices: " << totalSlices << endl;
    cout << "Slices eaten: " << slicesEaten << endl;
    cout << "Leftover slices: " << leftoverSlices << endl;

    // Let the user know if there isn't enough pizza for everyone
    if (leftoverSlices < 0) {
        cout << "Not enough pizza! You are short ";
        cout << -leftoverSlices << " slices." << endl;
    }
    cout << endl;

    return 0; // no errors
}
