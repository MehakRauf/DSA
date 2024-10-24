#include <iostream>
#include <string>

using namespace std;

string removeAllOccurrences(string s, string part)
{
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s, part;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    cout << "Enter the part you want to remove all occurrences of: " << endl;
    getline(cin, part);
    string ans =removeAllOccurrences(s, part);
    cout << "The given string \"" << s << "\" after removing all the occurrences became \"" << ans <<"\"."<< endl;
    return 0;
}