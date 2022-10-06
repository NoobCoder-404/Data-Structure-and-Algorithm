#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

int main()
{
    vector<int> v;
    int n, input;
    cout << "Enter the Array Size : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    vector<int> ans = reverseArray(v);
    cout << "Printing Reverse Array : " << endl;
    for (int i = 0; i < v.size(); i++)
    {

        cout << ans[i] << " ";
    }

    return 0;
}