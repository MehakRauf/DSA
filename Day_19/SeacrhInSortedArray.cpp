#include <iostream>
#include <vector>

using namespace std;

int sortedArraySearch(vector<int> A, int target)
{
    int st = 0, end = A.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (A[mid] == target)
        {
            return mid;
        }
        // left sorted
        if (A[st] <= A[mid])
        {
            // to go on left of the sorted left part
            if (A[st] <= target && target <= A[mid])
            {
                end = mid - 1;
            }
            // to go on right of the sorted left part
            else
            {
                st = mid + 1;
            }
        }
        // right sorted
        else
        {
            // to go on left of the sorted right part
            if (A[mid] <= target && target <= A[end])
            {
                st = mid + 1;
            }
            // to go on right of the sorted right part
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int ans = sortedArraySearch(v, target);
    if (ans != -1)
    {
        cout << "Target found at index: " << ans << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }
    return 0;
}