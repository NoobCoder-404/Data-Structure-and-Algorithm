#include <bits/stdc++.h>
using namespace std;

void selection(vector<int> arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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
    selection(arr, size);

    return 0;
}