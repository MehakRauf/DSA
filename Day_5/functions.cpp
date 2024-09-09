#include <iostream>
using namespace std;

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int factorial(int n)
{
    int fac = 1;
    for (int i = 2; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

int sumDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

double nCr(int n, int r)
{
    int nfac = factorial(n);
    int rfac = factorial(r);
    int nrfac = factorial(n - r);
    return (nfac / (rfac * nrfac));
}

bool isPrime(int n)
{
    if (n == 2 || n == 1)
    {
        return true;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

void fibonacciSeries(int n){
    int a=0, b=1, c=a+b;
    for (int i=1; i<=n;i++){
        cout<<a<<" ";
        a=b;
        b=c;
        c=a+b;
    }
}
int main()
{
    // cout << sumN(5) << endl;
    // cout << factorial(5) << endl;
    // cout<<sumDigits(145)<<endl;
    // cout << nCr(8, 2) << endl;
    // cout << isPrime(5) << endl;
    // printPrime(15);
    fibonacciSeries(10);
    return 0;
}