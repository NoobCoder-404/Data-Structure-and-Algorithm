#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 4, 5};
    int arr2[] = {1, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}