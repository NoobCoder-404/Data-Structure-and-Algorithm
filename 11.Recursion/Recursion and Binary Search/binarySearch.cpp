#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k)
{
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[5] = {3, 5, 6, 10, 14};
    int size = 6;
    int key = 14;
    bool ans = binarySearch(arr, 0, size - 1, key);
    cout << ans << endl;

    return 0;
}