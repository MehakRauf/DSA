#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Optimized Approach
vector<int> OA(vector<int> A)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
        {
            count0++;
        }
        else if (A[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int index = 0;
    for (int i = 0; i < count0; i++)
    {
        A[index] = 0;
        index++;
    }
    for (int i = 0; i < count1; i++)
    {
        A[index] = 1;
        index++;
    }
    for (int i = 0; i < count2; i++)
    {
        A[index] = 2;
        index++;
    }
    return A;
}

// Dutch National Flag Algorithm
// Optimal Approach
vector<int> DNF(vector<int> A)
{
    int low = 0, mid = 0, high = A.size() - 1;
    while (mid <= high)
    {
        if (A[mid] == 0)
        {
            swap(A[mid], A[low]);
            low++;
            mid++;
        }
        else if (A[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(A[mid], A[high]);
            high--;
        }
    }
    return A;
}
int main()
{
    vector<int> A = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    //Brute Force Approach 
    // sort(A.begin(),A.end());
    
    vector<int> ans = OA(A);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
