#include <iostream>
#include <vector>

using namespace std;

// problem #540 of leetcode
int singleElement(vector<int> A)
{
    int st = 0, n = A.size(), end = n - 1;
    // if there is a single element in the array
    if (n == 1)
    {
        return A[0];
    }
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        // corner cases
        //  if the mid is 0 it can't check it's previous element i.e A[mid-1] doesn't exists
        if (mid == 0 && A[0] != A[1])
        {
            return A[mid];
        }
        // if the mid is n-1 it can't check it's next element i.e A[mid+1] doesn't exists
        if (mid == n - 1 && A[n - 1] != A[n - 2])
        {
            return A[mid];
        }
        // checking if the element is found
        if (A[mid] != A[mid - 1] && A[mid] != A[mid + 1])
        {
            return A[mid];
        }
        // if the mid is even means there are even number of elements in both the sides
        if (mid % 2 == 0)
        {
            // means the element exists in the left side
            if (A[mid] == A[mid - 1])
            {
                end = mid - 1;
            }
            // otherwise in the right side
            else
            {
                st = mid + 1;
            }
        }
        // if the mid is odd means there are odd number of elements in both of the sides
        else
        {
            // means the element exists in the right side
            if (A[mid] == A[mid - 1])
            {
                st = mid + 1;
            }
            // otherwise in the left side
            else
            {
                end = mid - 1;
            }
        }
    }
}
int main()
{
    vector<int> v = {1, 1, 3, 3, 5, 4, 4};
    cout << "The single element is " << singleElement(v) << endl;
    return 0;
}