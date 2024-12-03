#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// slow-fast pointer approach
int findDuplicate(vector<int> arr)
{
    // two pointers slow and fast
    int slow = arr[0], fast = arr[0];
    // loop to find the cycle
    do
    {
        // slow move by on step slow+1
        slow = arr[slow];
        // fsat moves by two steps fast+2
        fast = arr[arr[fast]];
        // until the cycle is detected
    } while (slow != fast);
    // when the cycle is found now make the slow pointer start from arr[0]
    slow = arr[0];
    // iterate to find the duplicate value
    while (slow != fast)
    {
        // both pointers will increment by one
        fast = arr[fast];
        slow = arr[slow];
    }
    // return the duplicate value
    return slow;
}
int main()
{
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << findDuplicate(nums) << endl;
    return 0;
}