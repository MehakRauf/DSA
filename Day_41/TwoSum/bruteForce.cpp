#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> num, int target)
{
    vector<int> ans;
    // loop for first element
    for (int i = 0; i < num.size(); i++)
    {
        // loop starts from i+1 because can't use same value twice arr[i]+ arr[i] is not possible
        for (int j = 0; j < num.size(); j++)
        {
            // calculate the sum
            int sum = num[i] + num[j];
            // if the targe sum is found
            if (sum == target)
            {
                // push the values can also puch the indices
                ans.push_back(num[i]);
                ans.push_back(num[j]);
                // return the answe vector
                return ans;
            }
        }
    }
}
int main()
{
    vector<int> nums = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}