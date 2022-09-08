#include <bits/stdc++.h>
using namespace std;

int peakIndexMountainArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int arr[5] = {1, 3, 5, 4, 2};
    cout << "Peak Element Index of this array : " << peakIndexMountainArray(arr, 5);

    return 0;
}