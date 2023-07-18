/*
Basketball Points:
You are counting points for a basketball game, given the amount of 3-pointers
scored and 2-pointers scored, find the final points for the team and return
that value (2 -pointers scored, 3-pointers scored).

Examples
points(1, 1) ➞ 5
points(7, 5) ➞ 29
points(38, 8) ➞ 100

Notes
Don't forget to return the result.
*/
#include <iostream>

using namespace std;

int points(int num1, int num2)
{
    return (num1 * 2) + (num2 * 3);
}

int main()
{
    cout << points(1, 1) << endl;
    cout << points(7, 5) << endl;
    cout << points(38, 8) << endl;

    return 0;
}