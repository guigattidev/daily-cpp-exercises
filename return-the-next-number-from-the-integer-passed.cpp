/*
Return the Next Number from the Integer Passed:
Create a function that takes a number as an argument, add one to the number, and return the result.

Examples
addition(0) ➞ 1
addition(9) ➞ 10
addition(-3) ➞ -2

Notes
Do not test for overflow.
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int addition(int a)
{
    return ++a;
}

int main()
{
    cout << addition(0) << endl;
    cout << addition(9) << endl;
    cout << addition(-3) << endl;

    return 0;
}