#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int l = 0, u = arr.size() - 1;
    while (l <= u)
    {
        int mid = (l + u) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            u = mid - 1;
        }
    }
    return -1;
}

int recBinarySearch(vector<int> arr, int target, int st, int end)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2; // anoptimization considering the overflow.
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return recBinarySearch(arr, target, mid + 1, end);
        }
        else
        {
            return recBinarySearch(arr, target, st, mid - 1);
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int ans = recBinarySearch(arr, 4, 0, arr.size() - 1);
    if (ans != -1)
    {
        cout << "The element is found at index " << ans << endl;
    }
    else
    {
        cout << "Element is not found." << endl;
    }
    return 0;
}