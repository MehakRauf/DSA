#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
// Using division method
vector<int> productOfArray(const vector<int> &arr)
{
    int product = 1;
    vector<int> ans(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        product *= arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        ans[i] = product / arr[i];
    }

    return ans;
}

// Brute Force Approach
// Using nested loops

vector<int> productOfArrayLoops(const vector<int> &arr)
{
    vector<int> ans(arr.size(), 1);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j)
            {
                ans[i] *= arr[j];
            }
        }
    }

    return ans;
}

// optimal approach with tc O(n) and sc O(n)
vector<int> timeOptimized(vector<int> arr)
{
    vector<int> ans(arr.size(), 1);
    vector<int> prefix(arr.size(), 1);
    vector<int> suffix(arr.size(), 1);
    for (int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

// optimal approach with tc O(n) and sc O(1)
vector<int> spaceOptimized(vector<int> arr)
{
    vector<int> ans(arr.size(), 1);
    int suffix = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        ans[i] = ans[i - 1] * arr[i - 1];
    }

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        suffix *= arr[i + 1];
        ans[i] *= suffix;
    }

    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> result = spaceOptimized(arr);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}