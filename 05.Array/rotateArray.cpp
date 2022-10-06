#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &v, int k)
{
    vector<int> temp(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        temp[(i + k) % v.size()] = v[i];
    }
    v = temp;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotateArray(v, k);
    return 0;
}