#include <iostream>
#include <climits>
using namespace std;

pair<int, int> linearSearch(int matrix[][3], int target, int rows, int col)
{
    pair<int, int> p;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
            {
                return (p = {i, j});
            }
        }
    }
    return (p = {-1, -1});
}

int maximumRowSum(int matrix[][3], int rows, int col)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int maximumColumnSum(int matrix[][3], int rows, int col)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += matrix[j][i];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int diagonalSum(int matrix[][3], int rows, int col)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += matrix[j][i];
            }
        }
    }
    return sum;
}

// pd: i==j
// sd: j=n-i-1
int diagonalsSum(int matrix[][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                // to calculate the primary diagonal matrix sum
                sum += matrix[i][j];
            }
            else if (j == rows - i - 1)
            {
                // to calculate the secondary diagonal matrix sum
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int diagonalsSumOptimized(int matrix[][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        // for primary diagonal
        sum += matrix[i][i];
        // no element will be repeated
        if (i != rows - i - 1)
        {
            // for secondary
            sum += matrix[i][i];
        }
    }
    return sum;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    pair<int, int> ans = linearSearch(matrix, 1, rows, cols);
    cout << ans.first << " " << ans.second << endl;
    cout << "The maximum row sum is: " << diagonalsSumOptimized(matrix, rows, cols) << endl;
    return 0;
}