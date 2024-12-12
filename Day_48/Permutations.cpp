#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void permutation(vector<int> &nums, vector<vector<int>> &ans, int idx)
{
    if (idx == nums.size() - 1)
    {
        ans.push_back({nums});
    }
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]);
        permutation(nums, ans, idx + 1);
        swap(nums[i], nums[idx]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    permutation(nums, ans, 0);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = permute(nums);
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