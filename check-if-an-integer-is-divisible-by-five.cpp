/*
Check if an Integer is Divisible By Five:
Create a function that returns true if an integer is evenly divisible by 5, and false otherwise.

Examples
divisibleByFive(5) ➞ true
divisibleByFive(-55) ➞ true
divisibleByFive(37) ➞ false

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

bool divisibleByFive(int num)
{
    if (num % 5 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << boolalpha << divisibleByFive(5) << endl;
    cout << boolalpha << divisibleByFive(-55) << endl;
    cout << boolalpha << divisibleByFive(37) << endl;

    return 0;
}