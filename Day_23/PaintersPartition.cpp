#include <iostream>
#include <climits>
#include <vector>

using namespace std;

bool isPossible(vector<int> arr, int n, int m, int maxPossible)
{
    int time = 0, painterCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + time <= maxPossible)
        {
            time += arr[i];
        }
        else
        {
            time = arr[i];
            painterCount++;
        }
    }
    return painterCount <= m;
}

int maxTime(vector<int> arr, int n, int m)
{
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
        sum += arr[i];
    }
    int st = maxVal, end = sum, ans = -1;
    while (st <= end) //log(range)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else // right
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {40, 30, 10, 20};
    cout << maxTime(arr, 4, 2) << endl;
    return 0;
}