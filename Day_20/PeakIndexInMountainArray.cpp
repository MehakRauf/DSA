#include <iostream>
#include <vector>

using namespace std;

// brute force approach (Linear Seacrh algorithm O(n))
int PeakElementLS(vector<int> v)
{
    for (int i = 1; i < v.size() - 2; i++)
    {
        // the peak element will be greater from both of the sides
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            return i;
        }
    }
    return -1;
}

// optimized approach (Binary Search Algorithm O(logn))
int PeakElementSeacrh(vector<int> v)
{
    // corner case:
    // our peak element can never be on index 0 and n-1
    int st = 1, end = v.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        // checking if it is the pivot element
        if (v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
        {
            return mid;
        }
        // if we are in left increasing then peak will exist in right half
        if (v[mid - 1] < v[mid])
        {
            st = mid + 1;
        }
        // else it exists in the left half
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {0, 3, 8, 9, 5, 2};
    int ans = PeakElementSeacrh(v);
    if (ans != -1)
    {
        cout << "Element found at index: " << ans << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }
    return 0;
}