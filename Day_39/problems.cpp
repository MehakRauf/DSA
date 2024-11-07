#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool search(vector<vector<int>> mat, int target, int row)
{
    int n = mat[0].size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mat[row][mid] == target)
        {
            return true;
        }
        else if (target > mat[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
bool seacrhElement(vector<vector<int>> mat, int target)
{
    int m = mat.size(), n = mat[0].size();
    int st = 0, end = m - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mat[mid][0] <= target && target <= mat[mid][n - 1])
        {
            return search(mat, target, mid);
        }
        else if (target >= mat[mid][n - 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    cout << seacrhElement(matrix, 12) << endl;
    return 0;
}