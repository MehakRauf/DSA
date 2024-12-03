#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> num, int target)
{
    // size of the given vector
    int n = num.size();
    // unordered map to store the values for checking
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        // find the first value
        int first = num[i];
        // calculate second using the formulas
        int second = target - first;
        // if second is in the unordered_map
        if (m.find(second) != m.end())
        {
            return {m[second],i};// return indices of the pair
        }
         // store the index of the current value
        m[first] = i;
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