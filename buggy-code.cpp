/*
Buggy Code:
The challenge is to try and fix this buggy code, given the inputs true and false.
See the examples below for the expected output.

Examples
has_bugs(true) ➞ "sad days"
has_bugs(false) ➞ "it's a good day"

Notes
Don't overthink this challenge (look at the syntax and correct it).
Don't forget to return the result.
*/
#include <iostream>
#include <string>

using namespace std;

string has_bugs(bool value)
{
  return value ? "sad days" : "it's a good day";
}
int main()
{
  cout << has_bugs(true) << endl;
  cout << has_bugs(false) << endl;

  return 0;
}