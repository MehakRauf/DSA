#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    cout << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *arr << " ";
    //     //can't do it this was bcz it is a constant pointer it will always point to arr[0] can't change it
    //     arr++;
    // }
    return 0;
}