#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr{40, 35, 30, 25, 20};
    int size = arr.size();
    bubble(arr, size);

    return 0;
}