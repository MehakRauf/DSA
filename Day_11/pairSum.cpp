#include <iostream>
#include <vector>
using namespace std;

// brute force approach O(n^2)
vector<int> pairSum(vector<int> arr, int target)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// optimal approach O(n)
vector<int> pairSumOptimal(vector<int> arr, int target)
{
    vector<int> ans;
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            end++;
        }
    }
}
int main()
{
    vector<int> arr = {2, 7, 11, 15};
    // vector<int> ans = pairSum(arr, 26);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    vector<int> ans = pairSumOptimal(arr, 17);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}