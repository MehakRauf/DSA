#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> board, int row, int col, int n)
{
    // horizontally
    for (int i = 0; i < n; i++)
    {
        if (board[row][i] == 'Q')
        {
            return false;
        }
    }

    // vertically
    for (int j = 0; j < n; j++)
    {
        if (board[j][col] == 'Q')
        {
            return false;
        }
    }

    // upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < n; j++, i--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}
void solve(vector<string> &board, int row, int n, vector<vector<string>> &ans)
{
    if (row == n)
    {
        ans.push_back(board);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        // check if this safe place for the queen placement
        if (isSafe(board, row, i, n))
        {
            board[row][i] = 'Q';           // place the queen
            solve(board, row + 1, n, ans); // recursive call for next placement
            board[row][i] = '.';           // backtracking step!
        }
    }
}
vector<vector<string>> nQueens(int n)
{
    // initialize the board with .
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    solve(board, 0, n, ans);
    return ans;
}
int main()
{
    vector<vector<string>> ans = nQueens(4);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << i + 1 << " solution is: " << endl;
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}