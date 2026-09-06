/*
M1HW1 - Movie Talk
This program uses variables and cout to talk about a movie.
Uses int, double, and string variables.

INPUT: None
PROCESSING: None
OUTPUT: A short summary of the movie plus a few quotes
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    // variables for the movie info
    string title = "Rocky";
    int year = 1976;
    double gross = 225.0; // worldwide gross in millions of dollars

    // quick summary using the variables
    cout << "The movie \"" << title << "\" came out in " << year << "." << endl;
    cout << "It was made on a budget of about 1 million dollars ";
    cout << "and went on to gross around " << gross << " million dollars worldwide." << endl;
    cout << "It also won Best Picture at the Oscars." << endl;
    cout << endl;

    // some quotes and a bit of trivia
    cout << "A few things I like about it:" << endl;
    cout << "Rocky says, \"All I wanna do is go the distance.\"" << endl;
    cout << "Mickey tells him, \"You're gonna eat lightning and you're gonna crap thunder!\"" << endl;
    cout << "At the end Rocky and Apollo agree, \"Ain't gonna be no rematch.\" \"Don't want one.\"" << endl;
    cout << "Sylvester Stallone wrote the script himself in about three days." << endl;

    return 0; // no errors
}
