#include <iostream>
#include <climits>   // For INT_MAX and INT_MIN
#include <algorithm> // For std::min and std::max

using namespace std;

void SmallestAndLargestValue(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
}
void SmallestAndLargestIndex(int arr[], int size)
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
    cout << "Smallest index: " << smallest_index << endl;
    cout << "Largest index: " << largest_index << endl;
}

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {3, 5, 1, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    SmallestAndLargestValue(arr, size);
    SmallestAndLargestIndex(arr, size);
    int target = 8;
    cout << linearSearch(arr, size, target) << endl;
    reverseArray(arr, size);
    return 0;
}
