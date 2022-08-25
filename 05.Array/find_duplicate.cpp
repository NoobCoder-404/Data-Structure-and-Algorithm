#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans ^= i;
    }
    cout << ans << " ";

    return 0;
}