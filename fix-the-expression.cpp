/*
Fix the Expression:
Fix the code in the Code tab so the function returns true if and
only if x is equal to 7. Try to debug code and pass all the tests.

Examples
isSeven(4) ➞ false
isSeven(9) ➞ false
isSeven(7) ➞ true

Notes
The bug can be hard to find, so look closely!
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

bool isSeven(int value)
{
    if (value == 7)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << boolalpha << isSeven(4) << endl;
    cout << boolalpha << isSeven(9) << endl;
    cout << boolalpha << isSeven(7) << endl;

    return 0;
}