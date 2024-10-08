#include <iostream>
#include <vector>

using namespace std;

bool isValid(int m, int n, vector<int> b, int maxAllowedPages)
{
    int studentCount = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > maxAllowedPages)
        {
            return false;
        }
        if ((pages + b[i]) <= maxAllowedPages)
        {
            pages += b[i];
        }
        else
        {
            studentCount++;
            pages = b[i];
        }
    }
    if (studentCount > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int bookAllocation(int n, int m, vector<int> b)
{
    int sum = 0;
    for (int i = 0; i < b.size(); i++)
    {
        sum += b[i];
    }
    int st = 0, end = sum, ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(m, n, b, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {15, 17, 20};
    cout << bookAllocation(3, 2, a) << endl;
    return 0;
}