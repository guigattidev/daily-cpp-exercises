/*
Are the Numbers Equal?:
Create a function that returns true when num1 is equal to num2; otherwise return false.

Examples
isSameNum(4, 8) ➞ false
isSameNum(2, 2) ➞  true
isSameNum(2, "2") ➞ false

Notes
Don't forget to return the result.
*/
#include <iostream>
#include <string>

using namespace std;

bool isSameNum(int num1, int num2)
{
    return num1 == num2;
}

bool isSameNum(const string &str1, const string &str2)
{
    return str1 == str2;
}

int main()
{
    cout << boolalpha << isSameNum(4, 8) << endl;
    cout << boolalpha << isSameNum(2, 2) << endl;
    cout << boolalpha << isSameNum(4, 8) << endl;

    return 0;
}