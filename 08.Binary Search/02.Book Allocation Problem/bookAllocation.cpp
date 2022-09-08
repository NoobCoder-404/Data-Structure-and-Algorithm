/*
Question Links:
- Book Allocation Problem: https://bit.ly/3GiCqY0
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int std, int mid)
{
    int stdCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            stdCount++;
            if (stdCount > std || arr[i] > mid)
            {
                return false;
            }

            pageSum = 0;
            pageSum += arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int std)
{
    int s = 0;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, std, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    // vector<int> myVector{ 5, 10, 15 };
    vector<int> arr = {10, 20, 30, 40};
    int size = arr.size();
    int student = 2;
    int ans = allocateBooks(arr, size, student);
    cout << "Naximum number of pages assigned to a student is Mininum : " << ans << endl;

    return 0;
}