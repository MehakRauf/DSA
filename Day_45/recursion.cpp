#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}

int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumN(n - 1);
}
int main()
{
    cout << sumN(4);
    return 0;
}