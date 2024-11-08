#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> mat)
{
    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
    vector<int> ans;
    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            ans.push_back(mat[srow][j]);
        }

        // right
        for (int j = srow+1; j <= erow; j++)
        {
            ans.push_back(mat[j][ecol]);
        }

        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            // corner case to avoid duplicates printing
            if (srow == erow)
            {
                break;
            }
            ans.push_back(mat[erow][j]);
        }

        // left
        for (int j = erow - 1; j >= srow + 1; j--)
        {
            // corner case to avoid duplicates printing
            if (scol == ecol)
            {
                break;
            }
            ans.push_back(mat[j][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    vector<int> ans;
    ans = spiralMatrix(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}