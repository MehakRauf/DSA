#include <iostream>
#include <climits>
using namespace std;

void printSubArray(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

void printMaxSum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "The maximum sum sub array is: " << maxSum << endl;
}

void kadaneAlgo(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The max sum subarray is: " << maxSum << endl;
}
int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7};
    printSubArray(arr, 6);
    printMaxSum(arr, 6);
    kadaneAlgo(arr, 6);
    return 0;
}