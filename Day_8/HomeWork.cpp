#include <iostream>
#include <climits>   // For INT_MAX and INT_MIN
#include <algorithm> // For std::min and std::max

using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int arrayProduct(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

void SmallestAndLargestSWAP(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index, largest_index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            largest_index = i;
        }
    }
    swap(arr[smallest_index], arr[largest_index]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void uniqueValue(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool unique = true;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void intersectionArray(int arr1[], int arr2[], int size1, int size2)
{
    bool found;
    for (int i = 0; i < size1; i++)
    {
        found = false;
        int val = arr1[i];
        // if the element is already used/ checkedF
        for (int j = 0; j < i; j++)
        {
            if (val == arr1[j])
            {
                found = true;
                break;
            }
        }
        //if the element is not yet printed
        if (!found)
        {
            for (int j = 0; j < size2; j++)
            {
                if (val == arr2[j])
                {
                    cout << val << " ";
                }
            }
        }
    }
    cout << endl;
}
int main()
{
    int arr[] = {3, 5, 1, 8, 7, 2, 5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr2[] = {3, 5, 6, 7, 9, 0};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    intersectionArray(arr, arr2, size, size2);
    return 0;
}