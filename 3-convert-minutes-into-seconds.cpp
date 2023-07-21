/*
Convert Minutes into Seconds:
Write a function that takes an integer minutes and converts it to seconds.

Examples
convert(5) ➞ 300
convert(3) ➞ 180
convert(2) ➞ 120

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int convert(int a)
{
    return a * 60;
}

int main()
{
    cout << convert(5) << endl;
    cout << convert(3) << endl;
    cout << convert(2) << endl;

    return 0;
}