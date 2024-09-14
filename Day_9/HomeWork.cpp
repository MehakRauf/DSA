#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void linearSearch(vector<int> nums, int toSearch)
{
    bool flag = false;
    for (int i : nums)
    {
        if (i == toSearch)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "The element is found." << endl;
    }
    else
    {
        cout << "The element is not found." << endl;
    }
}
int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    reverseVector(v1);
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    linearSearch(v1, 3);
    return 0;
}