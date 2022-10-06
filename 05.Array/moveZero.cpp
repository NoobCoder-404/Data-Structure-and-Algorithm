#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &v)
{
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j] != 0)
        {
            swap(v[j], v[i]);
            i++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v{0, 1, 0, 3, 12};
    moveZeros(v);

    return 0;
}