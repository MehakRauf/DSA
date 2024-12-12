#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void permutation(string &nums, int idx)
{
    if (idx == nums.length() - 1)
    {
        for (int i = 0; i < nums.length(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = idx; i < nums.length(); i++)
    {
        swap(nums[i], nums[idx]);
        permutation(nums, idx + 1);
        swap(nums[i], nums[idx]);
    }
}

int main()
{
    string str = "abc";
    permutation(str, 0);
    return 0;
}