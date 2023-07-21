/*
Inches to Feet:
Create a function that accepts a measurement value in inches and returns the equivalent of the measurement value in feet.

Examples
inchesToFeet(324) ➞ 27
inchesToFeet(12) ➞ 1
inchesToFeet(36) ➞ 3

Notes
If inches are under 12, return 0.
12 inches = 1 foot.
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

double inchesToFeet(double inches)
{
    double feet = inches / 12.0;
    return feet;
}

int main()
{
    cout << inchesToFeet(324) << endl;
    cout << inchesToFeet(12) << endl;
    cout << inchesToFeet(36) << endl;

    return 0;
}