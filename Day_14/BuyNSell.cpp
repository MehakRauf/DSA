#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int buySell(vector<int> arr)
{
    // to keep track of the maximum profit
    int MP = 0;
    // considering each as the best day for buying
    int bestBuy = arr[0];
    // starting selling day from index 1 as the selling day sould be in future
    for (int i = 1; i < arr.size(); i++)
    {
        // checking if we are making the maximum profit on that day
        if (arr[i] > bestBuy)
        {
            MP = max(MP, arr[i] - bestBuy);
        }
        // then checking if this day will give us more profit then changing it accordingly
        bestBuy = min(bestBuy, arr[i]);
    }
    // at the end return the maximum profit calculated
    return MP;
}
int main()
{
    cout << buySell({7, 1, 5, 3, 6, 4});
    return 0;
}