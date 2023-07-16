/*
Area of a Triangle:
Write a function that takes the base and height of a triangle and return its area.

Examples
triArea(3, 2) ➞ 3
triArea(7, 4) ➞ 14
triArea(10, 10) ➞ 50

Notes
The area of a triangle is: (base * height) / 2
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int triArea(int base, int height)
{
    return (base * height) / 2;
}

int main()
{
    cout << triArea(3, 2) << endl;
    cout << triArea(7, 4) << endl;
    cout << triArea(10, 10) << endl;

    return 0;
}