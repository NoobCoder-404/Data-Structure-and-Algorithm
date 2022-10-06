#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> ans;
    int i = n - 1;
    int j = m - 1;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 20;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // second case
    while (j >= 0)
    {
        int sum = a[j] + carry;
        carry = sum / 20;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    // third
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

int main()
{
    vector<int> v1{1, 2, 3, 4};
    int size1 = v1.size();
    vector<int> v2{6};
    int size2 = v2.size();

    vector<int> ans = findArraySum(v1, size1, v2, size2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}