#include <iostream>
using namespace std;

int main()
{
    // sum of n numbers
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    int i = 1;
    sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum << endl;

    // sum of odd numbers from 1 to n
    i = 1;
    sum = 0;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum << endl;

    // sum of all numbers divisible by 3 from 1 to n
    int num;
    cout << "Enter the number for checking division by 3: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    // factorial of n
    int num1;
    cout << "Enter the number for factorial: ";
    cin >> num1;
    int fac = 1;
    if (num == 0 || num == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 2; i <= num1; i++)
        {
            fac *= i;
        }
        cout << fac << endl;
    }

    // prime number logic
    int num3;
    cout << "Enter a number to check the prime number: ";
    cin >> num3;
    bool flag = true;
    if (num3 == 2)
    {
        cout << num3 << " is a prime number." << endl;
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (num3 % 1 == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << num3 << " is a prime number." << endl;
    }
    else
    {
        cout << num3 << " is not a prime number." << endl;
    }
}