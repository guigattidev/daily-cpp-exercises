/*
Are the Numbers Equal?:
Create a function that takes two integers and checks if they are equal.

Examples
isEqual(5, 6) ➞ false
isEqual(1, 1) ➞ true
isEqual(36, 35) ➞ false

Notes
N/A
*/
#include <iostream>

using namespace std;

bool isEqual(int num1, int num2)
{
    if (num1 == num2)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << boolalpha << isEqual(5, 6) << endl;
    cout << boolalpha << isEqual(1, 1) << endl;
    cout << boolalpha << isEqual(36, 35) << endl;

    return 0;
}