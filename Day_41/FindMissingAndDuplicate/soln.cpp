#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> missingAndRepeating(vector<vector<int>> nums)
{
    // vector to store answers
    vector<int> ans;
    // size of the grid
    int n = nums.size();
    // to store the non-repeating values
    unordered_set<int> s;
    // a->repeating b->missing
    int a = 0, b = 0;
    // to calculate b
    int actualSum = 0, expectedSum = 0;
    // loop from 0->n
    for (int i = 0; i < n; i++)
    {
        // loop from 0->n
        for (int j = 0; j < n; j++)
        {
            // calculate the actual sum
            actualSum += nums[i][j];
            // if the value is already present means this is the repeating value
            if (s.find(nums[i][j]) != s.end())
            {
                // a is found
                a = nums[i][j];
                // push it in the answer vector
                ans.push_back(a);
            }
            // if not already present means non-repeating then add it to the unordered set
            s.insert(nums[i][j]);
        }
    }
    // calculate the expectedSum using formulas
    expectedSum = (n * n) * (n * n + 1) / 2;
    // calculate b
    b = expectedSum + a - actualSum;
    // store int ans vector
    ans.push_back(b);
    // return the ans vector
    return ans;
}
int main()
{
    // given grid
    vector<vector<int>> nums = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    // call the function
    vector<int> ans = missingAndRepeating(nums);
    // print the values
    cout << "The repeating value is: " << ans[0] << " and the missing value is: " << ans[1] << "." << endl;
    cout << endl;
    return 0;
}