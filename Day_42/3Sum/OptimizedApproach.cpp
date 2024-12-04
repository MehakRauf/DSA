#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> nums)
{
    // to store the answer
    vector<vector<int>> ans;
    // sort the vector so that we can use two pointer approach
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        // to avoid duplicates i.e: -1,-1
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        // initialize j and k
        int j = i + 1, k = n - 1;
        // loop until j<k
        while (j < k)
        {
            // calculate sum
            int sum = nums[i] + nums[j] + nums[k];
            // if the sum<0
            if (sum < 0)
            {
                j++;
            }
            // if sum>0 means decrease k as k is of greater value
            if (sum > 0)
            {
                k--;
            }
            // target found
            if (sum == 0)
            {
                // make the triplet vector
                vector<int> trip = {nums[i], nums[j], nums[k]};
                // store in the ans
                ans.push_back(trip);
                // update j and k
                j++;
                k--;
                // again avoid duplicates for j
                while (j < k && nums[j] == nums[j - 1])
                // j++ to avoid taking duplicates
                    j++;
            }
        }
    }
    // return the final answer
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> answer = threeSum(nums);
    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}