#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

int findDuplicate(vector<int> arr)
{
    // to form a unique set
    unordered_set <int> s;
    // loop through the array arr
    for(int val : arr){
        // if the value is already there means duplicate value is found
        if(s.find(val) != s.end()){
            // return that value
            return val;
        }
        // insert the value to the set
        s.insert(val);
    }    
}
int main()
{
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << findDuplicate(nums) << endl;
    return 0;
}