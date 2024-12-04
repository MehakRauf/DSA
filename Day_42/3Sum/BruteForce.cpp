#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> nums)
{ // to store the answer
    vector<vector<int>> ans;
    int n = nums.size();
    // for storing only unique triplets
    set<vector<int>> s;
    // to find a 
    for (int i = 0; i < n; i++)
    {
        int a = nums[i];
        // to find b
        for (int j = i + 1; j < n; j++)
        {
            int b = nums[j];
            // to find c
            for (int k = j + 1; k < n; k++)
            {
                int c = nums[k];
                // check if the sum of a,b and c is zero
                if (a + b + c == 0)
                {
                    // form the triplet
                    vector<int> trip = {a, b, c};
                    // sort it
                    sort(trip.begin(), trip.end());
                    // check if already doesn't exist in the set
                    if (s.find(trip) == s.end())
                    {
                        // insert in the set
                        s.insert(trip);
                        // push in the answer
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    // return ans
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