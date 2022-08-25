#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 2, 3, 1};
    int arr2[] = {1, 3, 4, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << "  ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    return 0;
}