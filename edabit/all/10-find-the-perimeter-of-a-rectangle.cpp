/*
Find the Perimeter of a Rectangle:
Create a function that takes length and width and finds the perimeter of a rectangle.

Examples
findPerimeter(6, 7) ➞ 26
findPerimeter(20, 10) ➞ 60
findPerimeter(2, 9) ➞ 22

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int findPerimeter(int length, int width)
{
    return (length * 2) + (width * 2);
}

int main()
{
    cout << findPerimeter(6, 7) << endl;
    cout << findPerimeter(20, 10) << endl;
    cout << findPerimeter(2, 9) << endl;

    return 0;
}