/*
Less Than 100?:
Given two numbers, return true if the sum of both numbers is less than 100. Otherwise return false.

Examples
lessThan100(22, 15) ➞ true
// 22 + 15 = 37
lessThan100(83, 34) ➞ false
// 83 + 34 = 117
lessThan100(3, 77) ➞ true

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

bool lessThan100(int num1, int num2)
{
    int total = num1 + num2;

    if (total <= 100)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << boolalpha << lessThan100(22, 15) << endl;
    cout << boolalpha << lessThan100(83, 34) << endl;
    cout << boolalpha << lessThan100(3, 77) << endl;

    return 0;
}