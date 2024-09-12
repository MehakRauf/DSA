#include <iostream>
using namespace std;

// reverse an integer n
int reverseAnInteger(int n)
{
    int ans = 0;
    while (n > 0)
    {
        // * 10 for the correct tenth place
        ans = ans * 10 + (n % 10);
        n = n / 10;
    }
    return ans;
}

bool isPowerOf2(int n)
{
    // n must be greater than 0, and applying logical and on n and n-1 must results as 0
    return (n > 0 && ((n & (n - 1)) == 0));
}
int main()
{
    cout << reverseAnInteger(987532) << endl;
    cout << isPowerOf2(25);
    return 0;
}