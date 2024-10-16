#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(vector<int> A, int m, vector<int> B, int n)
{
    int i = m - 1, j = n - 1, idx = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[idx--] = A[i--];
        }
        else
        {
            A[idx--] = B[j--];
        }
    }
    while (j >= 0)
    {
        A[idx--] = B[j--];
    }
    return A;
}
int main()
{
    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 5, 6};
    int n = B.size(), m = 3; // m -> only nonzeroes
    vector<int> ans = mergeSortedArrays(A, m, B, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}