/*
Flip the int Boolean:
An int boolean is same as a normal boolean, just 1 = true and 0 = false. Make a function
that returns an int boolean opposite of an int boolean given (flip the int boolean).

Examples
flipIntBool(1) ➞ 0
flipIntBool(0) ➞ 1

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int flipIntBool(int value)
{
    return (value == 0) ? 1 : 0;
}

int main()
{
    cout << flipIntBool(1) << endl;
    cout << flipIntBool(0) << endl;

    return 0;
}