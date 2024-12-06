#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> fourSum(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end()); // Sort the array
    vector<vector<int>> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        // Skip duplicates for the first number
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            // Skip duplicates for the second number
            if (j > i + 1 && nums[j] == nums[j - 1])
            {
                continue;
            }

            int k = j + 1, l = n - 1; // Two pointers for the remaining two numbers
            while (k < l)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    // Skip duplicates for the third and fourth numbers
                    while (k < l && nums[k] == nums[k - 1])
                    {
                        k++;
                    }
                    while (k < l && nums[l] == nums[l + 1])
                    {
                        l--;
                    }
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-2, -1, -1, 1, 1, 2, 2};
    int target = 0;
    vector<vector<int>> answer = fourSum(nums, target);

    // Print the result
    for (const auto& quad : answer)
    {
        for (int num : quad)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
