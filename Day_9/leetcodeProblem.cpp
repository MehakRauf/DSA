#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans ^= nums[i];
    }
    return ans;
}
int main()
{
    vector<int> v1 = {1, 1, 4, 5, 4};
    cout << singleNumber(v1) << endl;
    return 0;
}