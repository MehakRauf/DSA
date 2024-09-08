#include <iostream>
using namespace std;

void squareNumberPattern(int n)
{
    for (int i = 0; i < n; i++) // can also be from 1 to <=n
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "With ABCD" << endl;
    for (int i = 0; i < n; i++) // can also be from 1 to <=n
    {
        char c = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

void squareCountingPattern(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void squareAlphabetPattern(int n)
{
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

void triangleStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void triangleNumberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void triangleCountingPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= (i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void reverseTrianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void floydTriangle(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void invertedTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void pyramidPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int k = n; k > i; k--)
        {
            cout << "  ";
        }
        // values
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // values
        for (int l = i - 1; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}

void holllowDaimond(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= n; j++)
        {
            if (i + j == 3)
            {
                cout << "*" << " ";
            }
        }
        for (int l = n - 2; l >= 0; l--)
        {
            if (l + i == 3)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= n; j++)
        {
            if (i + j == 3)
            {
                cout << "*" << " ";
            }
        }
        for (int l = n - 2; l >= 0; l--)
        {
            if (l + i == 3)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void butterflyPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int k = 0; k < 2 * (n - i) - 2; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k <= 2 * (n - i) - 1; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    // squareNumberPattern(4);
    // squareCountingPattern(3);
    // squareAlphabetPattern(3);
    // triangleStarPattern(4);
    // triangleNumberPattern(4);
    // triangleCountingPattern(4);
    // reverseTrianglePattern(4);
    // floydTriangle(4);
    // invertedTriangle(4);
    // pyramidPattern(4);
    // holllowDaimond(4);
    butterflyPattern(4);
}