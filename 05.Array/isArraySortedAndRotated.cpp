#include <bits/stdc++.h>
using namespace std;
bool isSortedRotated(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
        count++;

    return count <= 1;
}

int main()
{
    int size = 5;
    int arr[size] = {3, 4, 5, 1, 2};
    int ans = isSortedRotated(arr, size);
    if (ans == 0 || ans == 1)
    {
        cout << "Rotated and Sorted" << endl;
    }
    else
    {
        cout << "Not Rotated and Sorted" << endl;
    }

    return 0;
}