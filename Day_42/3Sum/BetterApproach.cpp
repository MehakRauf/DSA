#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> nums)
{
    int n = nums.size();
    // for storing only unique triplets
    set<vector<int>> uniqueTriplets;
    // to find the first a => b+c = -a = target
    for (int i = 0; i < n; i++)
    {
        int tar = -nums[i];
        // to store the elements
        set<int> s;
        // to find the third element tar - nums[j]
        for (int j = i + 1; j < n; j++)
        {
            int third = tar - nums[j];
            if (s.find(third) != s.end())
            {
                // when three variables are found store them
                vector<int> trip = {nums[i], nums[j], third};
                // sort
                sort(trip.begin(), trip.end());
                // if already not present in the uniqueTriplets then insert
                if (uniqueTriplets.find(trip) == uniqueTriplets.end())
                {
                    uniqueTriplets.insert(trip);
                }
            }
            // insert the elements
            s.insert(nums[j]);
        }
    }
    // finally the answer vector is updated
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    // return the answer
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