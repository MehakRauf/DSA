#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isAplhaNumeric(char c)
{
    if ((c >= '0' && c <= '9') ||
        (tolower(c) >= 'a' && tolower(c) <= 'z'))
    {
        return true;
    }
    return false;
}
bool validPalindrome(string s)
{
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        if (!isAplhaNumeric(s[st]))
        {
            st++;
            continue;
        }
        if (!isAplhaNumeric(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }
}
int main()
{
    string s;
    getline(cin, s);
    if (validPalindrome(s))
    {
        cout << "The given string \"" << s << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "The given string \"" << s << "\" is not a palindrome." << endl;
    }
    return 0;
}