#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 3};

    int pivot = -1, n = A.size();
    // find the pivot element
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            pivot = A[i];
            break;
        }
    }
    // if no pivot then simply reverse the array
    if (pivot == -1)
    {
        reverse(A.begin(), A.end());
        return 0;
    }

    // find the rightmost element
    for (int i = n - 1; i > pivot; i++)
    {
        if (A[i] > A[pivot])
        {
            swap(A[i], A[pivot]);
            break;
        }
    }

    // reverse the right most part
    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        swap(A[i], A[j]);
        j--;
        i++;
    }

    cout << "The lexicorgraphically next permutation/arr is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}