// find unique  ==> using xor method
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 4, 1};
    int ans = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    cout << ans << " ";

    return 0;
}