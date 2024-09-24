#include <iostream>
#include <vector>
using namespace std;

// brute force approach
int maxAreaBrute(vector<int> height)
{
    int maxWater = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int width = j - i;
            int ht = min(height[i], height[j]);
            int area = width * ht;
            maxWater = max(area, maxWater);
        }
    }
    return maxWater;
}

int maxAreaOptimal(vector<int> height)
{
    int maxWater = 0, lp = 0, rp = height.size() - 1;
    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[rp], height[lp]);
        int area = w * ht;
        maxWater = max(maxWater, area);
        (height[rp] < height[lp]) ? rp-- : lp++;
    }
    return maxWater;
}
int main()
{
    cout << maxAreaOptimal({1, 8, 6, 2, 5, 4, 8, 3, 7});
    return 0;
}