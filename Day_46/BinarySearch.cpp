#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int left, int right, int target)
{
    if (left <= right)
    {

        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySearch(arr, mid + 1, right, target);
        }
        else if (arr[mid] > target)
        {
            return binarySearch(arr, left, mid - 1, target);
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int l = 0, r = arr.size() - 1;
    cout << binarySearch(arr, l, r, 6) << endl;
    return 0;
}