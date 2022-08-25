#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 2, 5, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}