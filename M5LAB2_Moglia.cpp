/*
CSC 134
M5LAB2 - Complete a Program
Katherine Moglia
11/15/2026
Asks the user for the length and width of a
rectangle, calculates the area, and then
displays all three values.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
   // This program calculates the area of a rectangle.

   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area

   // Get the rectangle's length.
   length = getLength();

   // Get the rectangle's width.
   width = getWidth(); // fixed: was missing the semicolon

   // Get the rectangle's area.
   area = getArea(length, width); // fixed: "are" typo, and it needs length and width

   // Display the rectangle's data.
   displayData(length, width, area);

   return 0;
}

//***************************************************
// The getLength, getWidth, getArea,                *
// and displayData functions are below.             *
//***************************************************

double getLength()
{
   // Ask the user for the length and send it back to main()
   double length;
   cout << "Enter the rectangle's length: ";
   cin >> length;
   return length;
}

double getWidth()
{
   // Ask the user for the width and send it back to main()
   double width;
   cout << "Enter the rectangle's width: ";
   cin >> width;
   return width;
}

double getArea(double length, double width)
{
   // Area of a rectangle is length times width
   return length * width;
}

void displayData(double length, double width, double area)
{
   // Print all three values with labels, lined up in columns
   cout << endl;
   cout << "Rectangle Data" << endl;
   cout << "--------------" << endl;
   cout << fixed << setprecision(2);
   cout << left << setw(10) << "Length:" << right << setw(10) << length << endl;
   cout << left << setw(10) << "Width:" << right << setw(10) << width << endl;
   cout << left << setw(10) << "Area:" << right << setw(10) << area << endl;
}
