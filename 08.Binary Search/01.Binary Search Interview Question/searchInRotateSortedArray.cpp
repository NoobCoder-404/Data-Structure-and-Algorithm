#include <bits/stdc++.h>
using namespace std;
int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    // mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(int arr[], int size, int k)
{
    int pivot = getPivot(arr, size);
    if (k >= arr[pivot] && k <= arr[size - 1])
    {
        return binarySearch(arr, pivot, size - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int k = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Search In Rotate Sorted Array  : " << findPosition(arr, size, k);

    return 0;
}