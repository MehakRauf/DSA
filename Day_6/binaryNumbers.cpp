#include <iostream>
#include <cmath>
using namespace std;

void decimalToBinary(int num)
{
    int ans = 0;
    int rem;
    int power = 1;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans += rem * power;
        power *= 10;
    }
    cout << ans << endl;
}

void binaryToDecimal(int n)
{
    int ans = 0, power = 1;
    int rem = n % 10;
    while (n > 0)
    {
        ans += rem * power;
        power *= 2;
        n = n / 10;
        rem = n % 10;
    }
    cout << ans << endl;
}
int main()
{
    decimalToBinary(12);
    binaryToDecimal(11);
    return 0;
}