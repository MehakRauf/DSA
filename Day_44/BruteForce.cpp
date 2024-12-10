#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int subArray(vector<int> arr, int k)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {9, 4, 20, 3, 5, 10};
    cout << "The count is: " << subArray(nums, 33);
    return 0;
}