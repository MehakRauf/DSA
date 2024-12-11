#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void subsets(vector<int> arr, vector<int> ans, int i, vector<vector<int>> &allSubsets)
{
    if (i == arr.size())
    {
        allSubsets.push_back({ans});
        return;
    }
    ans.push_back(arr[i]);
    subsets(arr, ans, i + 1, allSubsets);
    ans.pop_back();
    int idx = i + 1;
    while (idx < arr.size() && arr[idx] == arr[idx - 1])
    {
        idx++;
    }
    subsets(arr, ans, idx, allSubsets);
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> allSubsets;
    vector<int> ans;
    sort(nums.begin(), nums.end());
    subsets(nums, ans, 0, allSubsets);
    return allSubsets;
}

int main()
{
    vector<int> arr = {1, 2, 2};
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans = subsetsWithDup(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int val : ans[i])
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}