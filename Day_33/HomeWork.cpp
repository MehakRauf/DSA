#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string s)
{
    string s1 = s;
    reverse(s.begin(), s.end());
    if (s1 == s)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << "Check is a string is palindrome or not? " << endl;
    string str = "racecar";
    if (isPalindrome(str))
    {

        cout << "The given string is a palindrome." << endl;
    }
    else
    {
        cout << "The given string is not a palindrome." << endl;
    }
    return 0;
}