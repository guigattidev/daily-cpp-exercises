/*
Return the Sum of Two Numbers:
Create a function that takes two numbers as arguments and returns their sum.

Examples:
addition(3, 2) ➞ 5
addition(-3, -6) ➞ -9
addition(7, 3) ➞ 10

Notes:
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int main()
{
    cout << addition(3, 2) << endl;
    cout << addition(-3, -6) << endl;
    cout << addition(7, 3) << endl;

    return 0;
}