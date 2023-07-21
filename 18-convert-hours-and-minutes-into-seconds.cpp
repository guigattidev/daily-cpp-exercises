/*
Convert Hours and Minutes into Seconds:
Write a function that takes two integers (hours, minutes), converts them to seconds, and adds them.

Examples
convert(1, 3) ➞ 3780
convert(2, 0) ➞ 7200
convert(0, 0) ➞ 0

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int convert(int num1, int num2)
{
    int total = (num1 * 3600) + (num2 * 60);

    return total;
}

int main()
{
    cout << convert(1, 3) << endl;
    cout << convert(2, 0) << endl;
    cout << convert(0, 0) << endl;

    return 0;
}