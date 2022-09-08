#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
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

int main()
{
    int even[6] = {1, 3, 5, 7, 8, 9};
    int odd[5] = {2, 5, 7, 8, 9};

    int indexEven = binarySearch(even, 6, 7);
    cout << "Index of 7 is " << indexEven << endl;

    int indexOdd = binarySearch(odd, 5, 9);
    cout << "Index of 9 is " << indexOdd << endl;

    return 0;
}