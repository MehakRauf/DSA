#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> arr = {'m', 'e', 'h', 'a', 'k'};
    int start = 0, end = arr.size() - 1;
    cout << "Reverse a character Array: " << endl;
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Reverse a string: " << endl;
    string str = "fatima";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}