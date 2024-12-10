#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n)
{
    if (n == 1)
    {
        return true;
    }
    
    return isSorted(arr,n-1) && arr[n-1]>= arr[n-2];
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 0};
    cout << isSorted(arr, arr.size());
}