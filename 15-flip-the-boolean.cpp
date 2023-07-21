/*
Flip the Boolean:
Create a function that reverses a boolean value.

Examples
reverse(true) ➞ false
reverse(false) ➞ true

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

bool reverse(bool value)
{
    return !value;
}

int main()
{
    cout << boolalpha << reverse(true) << endl;
    cout << boolalpha << reverse(false) << endl;

    return 0;
}