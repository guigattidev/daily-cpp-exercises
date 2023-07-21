/*
Is the Array Empty?:
Write a function that returns true if given array is empty, and false otherwise.

Examples
isEmpty({}) ➞ true
isEmpty({1, 2, 3}) ➞ false

Notes
Don't forget to return the result.
*/
#include <iostream>
#include <vector>

using namespace std;

bool isEmpty(const vector<int> &arr)
{
    return arr.empty();
}

int main()
{
    cout << boolalpha << isEmpty({}) << endl;
    cout << boolalpha << isEmpty({1, 2, 3}) << endl;

    return 0;
}