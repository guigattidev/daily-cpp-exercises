/*
Return the Remainder from Two Numbers:
There is a single operator in C++, capable of providing the remainder of a division operation.
Two numbers are passed as parameters. The first parameter divided by the second parameter will
have a remainder, possibly zero. Return that value.

Examples
remainder(1, 3) ➞ 1
remainder(3, 4) ➞ 3
remainder(-9, 45) ➞ -9
remainder(5, 5) ➞ 0

Notes
The tests only use positive and negative integers.
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int remainder(int param1, int param2)
{
    return param1 % param2;
}

int main()
{
    cout << remainder(1, 3) << endl;
    cout << remainder(3, 4) << endl;
    cout << remainder(-9, 45) << endl;
    cout << remainder(5, 5) << endl;

    return 0;
}