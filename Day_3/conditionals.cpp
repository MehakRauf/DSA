#include <iostream>
using namespace std;

int main()
{
    // check if the character is lower or upper case
    char c;
    cout << "Enter the character: ";
    cin >> c;
    int ascii_value = c;
    if (ascii_value >= 65 && ascii_value <= 90) // c>=65 && c<=90 and another method will also c>='A' && c<='Z' 
    {
        cout << "Upper case" << endl;
    }
    else if (ascii_value >= 97 && ascii_value <= 122)
    {
        cout << "Lower case" << endl;
    }
    else
    {
        cout << "Not an alphabet." << endl;
    }
    return 0;
}