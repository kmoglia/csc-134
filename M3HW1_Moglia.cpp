// CSC 134
// M3HW1 - Gold
// Katherine Moglia
// 10/20/2026
// Four short programs that use if statements to do different
// things based on what the user types in.

#include <iostream>
#include <iomanip> // for setprecision and setw
#include <string>  // for string
#include <cstdlib> // for rand and srand
#include <ctime>   // for time (used to seed rand)
using namespace std;

int main() {

    // ==========================================================
    // Question 1 - Chat Bot
    // ==========================================================
    cout << "==============================" << endl;
    cout << "Question 1 - Chat Bot" << endl;
    cout << "==============================" << endl;
    // test values: yes, no, maybe

    // Variables
    string answer; // the user's answer to the question

    // start the conversation
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> answer;

    // respond based on what they typed
    if (answer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK." << endl;
    }
    cout << endl;

    // ==========================================================
    // Question 2 - Receipt Calculator (with tip)
    // ==========================================================
    cout << "==============================" << endl;
    cout << "Question 2 - Receipt Calculator" << endl;
    cout << "==============================" << endl;
    // test values: 20.00 dine in (1), 20.00 to go (2)

    // Constants for tax and tip
    const double TAX_RATE = 0.08; // 8% sales tax
    const double TIP_RATE = 0.15; // 15% tip for dine in only

    // Variables
    double mealPrice,  // the price of the meal
           tax,        // the tax amount
           tip = 0.0,  // the tip amount (stays 0 if it's to go)
           total;      // the total amount due
    int orderType;     // 1 = dine in, 2 = to go

    // set the output formatting for money
    cout << setprecision(2) << fixed << showpoint;

    // Step 1 - Get the meal price and order type
    cout << "Enter the price of the meal: $";
    cin >> mealPrice;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    // Step 2 - Calculate tax, tip, and total
    tax = mealPrice * TAX_RATE;

    // only add a tip if they are dining in
    if (orderType == 1) {
        tip = mealPrice * TIP_RATE;
    }

    total = mealPrice + tax + tip;

    // Step 3 - Print the receipt
    cout << endl;
    cout << "---------- RECEIPT ----------" << endl;
    if (orderType == 1) {
        cout << "Order type:   Dine in" << endl;
    }
    else {
        cout << "Order type:   To go" << endl;
    }
    cout << "Meal price:   $" << setw(8) << mealPrice << endl;
    cout << "Tax (8%):     $" << setw(8) << tax << endl;
    if (orderType == 1) {
        cout << "Tip (15%):    $" << setw(8) << tip << endl;
    }
    cout << "-----------------------------" << endl;
    cout << "Total due:    $" << setw(8) << total << endl;
    cout << "-----------------------------" << endl;
    cout << "Thank you for your order!" << endl;
    cout << endl;

    // ==========================================================
    // Question 3 - Choose Your Own Adventure
    // ==========================================================
    cout << "==============================" << endl;
    cout << "Question 3 - Choose Your Own Adventure" << endl;
    cout << "==============================" << endl;
    // test values: door -> game over
    //              tunnel, then jump -> defeat
    //              tunnel, then climb -> victory

    // Variables
    string firstChoice,  // the user's first choice
           secondChoice; // the user's second choice

    // set the scene
    cout << "You wake up in an old basement. The lights are out." << endl;
    cout << "There's a rusty door to your left and a dark tunnel to your right." << endl;
    cout << endl;

    // first choice
    cout << "Type door or tunnel: ";
    cin >> firstChoice;
    cout << endl;

    if (firstChoice == "door") {
        cout << "You push the door open and it falls off the hinges." << endl;
        cout << "The noise wakes up the guard dog on the other side." << endl;
        cout << "GAME OVER." << endl;
    }
    else if (firstChoice == "tunnel") {
        cout << "You crawl through the tunnel and come out at the bottom of a well." << endl;
        cout << "There's an old rope hanging down, and a gap you could try to jump across." << endl;
        cout << endl;

        // second choice (only happens if they picked the tunnel)
        cout << "Type climb or jump: ";
        cin >> secondChoice;
        cout << endl;

        if (secondChoice == "climb") {
            cout << "The rope holds. You climb out into the sunlight." << endl;
            cout << "YOU WIN!" << endl;
        }
        else if (secondChoice == "jump") {
            cout << "You come up short and land in the cold water." << endl;
            cout << "You're stuck down there. DEFEAT." << endl;
        }
        else {
            cout << "You stand there too long trying to decide. The water rises." << endl;
            cout << "DEFEAT." << endl;
        }
    }
    else {
        cout << "That's not a valid choice. You sit in the dark and wait." << endl;
        cout << "Nobody comes. GAME OVER." << endl;
    }
    cout << "Thanks for playing!" << endl;
    cout << endl;

    // ==========================================================
    // Question 4 - Math Practice
    // ==========================================================
    cout << "==============================" << endl;
    cout << "Question 4 - Math Practice" << endl;
    cout << "==============================" << endl;
    // test: run it a few times and enter both right and wrong answers

    // Variables
    int num1,       // first random number
        num2,       // second random number
        correct,    // the correct answer
        userAnswer; // the user's answer

    // seed the random number generator with the current time
    // so we get different numbers each time the program runs
    srand(time(0));

    // Step 1 - Generate two single digit numbers (0-9)
    num1 = rand() % 10;
    num2 = rand() % 10;
    correct = num1 + num2;

    // Step 2 - Ask the question
    cout << "What is " << num1 << " plus " << num2 << "? ";
    cin >> userAnswer;

    // Step 3 - Check the answer
    if (userAnswer == correct) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect. The answer is " << correct << "." << endl;
    }

    return 0; // no errors
}
// End of M3HW1
