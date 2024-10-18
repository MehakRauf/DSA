#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    } // 1 2 3 4
    cout << endl;

    // auto is the replacement of the complete declaration of the iterator
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    } // 1 2 3 4
    cout << endl;

    vector<int>::reverse_iterator it1;
    for (it1 = vec.rbegin(); it1 != vec.rend(); it1++)
    {
        cout << *(it1) << " ";
    } // 4 3 2 1
    cout << endl;

    for (auto it1 = vec.rbegin(); it1 != vec.rend(); it1++)
    {
        cout << *(it1) << " ";
    } // 4 3 2 1
    cout << endl;
    return 0;
}