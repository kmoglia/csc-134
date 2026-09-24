// CSC 134
// M1LAB - Apple Sales
// Katherine Moglia
// 9/24/2026

#include <iostream>
#include <iomanip> // for setprecision - keeps prices at 2 decimal places
#include <string>
using namespace std;

int main() {
    // This program will advertise Jane Smith's apples.
    // The owner's name
    string name = "Jane Smith";
    // number of apples owned
    int apples = 100;
    // price per apple
    double pricePerApple = 0.25;

    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;

    // format all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // print all the information about the orchard
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock." << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;

    // print the total price to buy all of them
    cout << "If you want them all, that will be $";
    cout << totalPrice << endl;

    return 0; // no errors
}
