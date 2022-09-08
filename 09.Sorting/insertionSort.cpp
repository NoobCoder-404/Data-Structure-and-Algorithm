#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)

    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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
    insertion(arr, size);

    return 0;
}