/*
M1LAB - Apple Sales
This program advertises an apple salesperson's products. It shows
the store name, how many apples she has for sale, the price per
apple, and the total price if someone bought all of them at once.

INPUT: None (values are hard coded)
PROCESSING: total price = number of apples * price per apple
OUTPUT: The store name, salesperson, apple count, price per apple,
and the total price for all the apples
*/

#include <iostream>
#include <iomanip> // for setprecision - keeps prices at 2 decimal places
#include <string>
using namespace std;

int main() {

    // set up all the variables
    string store_name = "Jane Smith's Apple Stand"; // change to whatever you like
    string salesperson = "Jane Smith";
    int apples_for_sale = 100;
    double price_each = 0.25;
    double total_price;

    // calculate the total price for all the apples
    total_price = apples_for_sale * price_each;

    // formatting - set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // display the store info
    cout << "Welcome to " << store_name << "!" << endl;
    cout << "Salesperson: " << salesperson << endl;
    cout << "Apples for sale: " << apples_for_sale << endl;
    cout << "Price per apple: $" << price_each << endl;
    cout << "Price for all " << apples_for_sale << " apples: $" << total_price << endl;

    return 0; // no errors
}
