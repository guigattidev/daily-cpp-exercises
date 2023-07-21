/*
Is the Number Less than or Equal to Zero?:
Create a function that takes a number as its only argument and returns true
if it's less than or equal to zero, otherwise return false.

Examples
lessThanOrEqualToZero(5) ➞ false
lessThanOrEqualToZero(0) ➞ true
lessThanOrEqualToZero(2) ➞ false

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

bool lessThanOrEqualToZero(int arg)
{
    if (arg <= 0)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << boolalpha << lessThanOrEqualToZero(5) << endl;
    cout << boolalpha << lessThanOrEqualToZero(0) << endl;
    cout << boolalpha << lessThanOrEqualToZero(2) << endl;

    return 0;
}