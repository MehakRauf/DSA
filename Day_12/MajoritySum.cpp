#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// brute force approach
int majoritySum(vector<int> arr)
{
    for (int value : arr)
    {
        int freq = 0;
        for (int val : arr)
        {
            if (value == val)
            {
                freq++;
            }
        }
        if (freq > (arr.size() / 2))
        {
            return freq;
        }
    }
}

// optimed then brute force approach
int majoritySumOptimized(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int freq = 1, ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            ans = arr[i];
            freq = 1;
        }
        if (freq > (arr.size() / 2))
        {
            return freq;
        }
    }
}
// moore's algorithm
int mooreAlgo(vector<int> arr)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (arr[i] == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    int count = 0;
    for (int i : arr)
    {
        if (i == ans)
        {
            count++;
        }
    }
    if (count > (arr.size() / 2))
    {
        // for the frequency
        return count;
        // for the value
        //  return ans;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> arr = {1, 2, 2, 1, 1};
    cout << "The frequency is: " << mooreAlgo(arr) << endl;

    return 0;
}