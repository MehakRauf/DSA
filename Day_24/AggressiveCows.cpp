#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int c, int n, int minPossibleDistance)
{
    int cows = 1, lastPos = arr[0]; // considering the first cow at arr[0] posiiton
    for (int i = 1; i < n; i++)
    {
        // if the distance from the already placed cow to the next place is greater than
        // the mid means it is possible minimum answer
        if ((arr[i] - lastPos) >= minPossibleDistance)
        {
            // increase the cow number and place it on the current position
            cows++;
            lastPos = arr[i];
        }
        // means all cows are placed 
        if (cows == c)
        {
            return true;
        }
    }
    // otherwise it is not a possible distance
    return false;
}
int aggressiveCows(vector<int> arr, int n, int c)
{
    sort(arr.begin(), arr.end());
    int st = 1, end = arr[n - 1] - arr[0], ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, c, n, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = arr.size();
    int c = 3; // no. of cows
    cout << aggressiveCows(arr, n, c) << endl;
}