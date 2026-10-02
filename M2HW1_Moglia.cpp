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

    return 0; // no errors
}
