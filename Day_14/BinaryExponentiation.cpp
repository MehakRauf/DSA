#include <iostream>
using namespace std;

void binaryExponentiation(double x, int n)
{
    // what we are doing is we are taking the binary form of our number
    // and then multiplying it with itself i.e: 3*3 then 3^2*3
    // this code will take O(logn time to complete.
    long binaryForm = n;
    double ans = 1;
    // if we have to calculate the negative power so we are doing a bit of changes
    // changing x to 1/x and making the power positive so there will be no changes
    // for the calculation method.
    if (n < 0)
    {
        x = 1 / x;
        binaryForm = -binaryForm;
    }
    while (binaryForm > 0)
    {
        if (binaryForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    }
    cout << ans;
}
int main()
{
    binaryExponentiation(3, -4);
    return 0;
}