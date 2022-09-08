#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, string> a, pair<int, string> b)
{
    return a.second > b.second;
}

int main()
{
    vector<pair<int, string>> v;
    vector<pair<int, string>>::iterator it;
    v.push_back(make_pair(1, "hamim"));
    v.push_back(make_pair(2, "jamim"));
    v.push_back(make_pair(4, "arnab"));

    sort(v.begin(), v.end(), comparator);

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}