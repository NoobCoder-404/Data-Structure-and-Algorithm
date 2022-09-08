#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start - (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 3, 5};
    cout << "First Occurrence of 3 is at index " << firstOccurrence(arr, 7, 3) << endl;
    cout << "Last Occurrence of 3 is at index " << lastOccurrence(arr, 7, 3) << endl;

    return 0;
}