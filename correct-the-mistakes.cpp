/*
Correct the Mistakes:
Fix the code in the code tab to pass this challenge (only syntax errors).
Look at the examples below to get an idea of what the function should do.

Examples
squared(5) ➞ 25
squared(9) ➞ 81
squared(100) ➞ 10000

Notes
READ EVERY WORD CAREFULLY, CHARACTER BY CHARACTER!
Don't overthink this challenge; it's not supposed to be hard.
*/
#include <iostream>

using namespace std;

int squared(int param)
{
    return param * param;
}

int main()
{
    cout << squared(5) << endl;
    cout << squared(9) << endl;
    cout << squared(100) << endl;

    return 0;
}