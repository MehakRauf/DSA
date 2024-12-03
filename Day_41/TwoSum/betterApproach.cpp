#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> num, int target)
{
    // vector to store the answer
    vector<int> ans;
    // size of the given vector
    int n = num.size();
    // pointers st->0 and end->n-1
    int st = 0, end = n - 1;
    // sort the given vector
    sort(num.begin(), num.end());
    // start the loop
    while (st < end)
    {
        // calculate the sum
        int sum = num[st] + num[end];
        // if target is found
        if (sum == target)
        {
            ans.push_back(num[st]);
            ans.push_back(num[end]);
            // return the answer vector
            return ans;
        }
        // if the calulated sum is greater then end--
        else if (sum > target)
        {
            end--;
        }
        // if the calculated sum is less then start++
        else
        {
            st++;
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