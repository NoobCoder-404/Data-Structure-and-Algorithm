#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    map<string, int>::iterator it;
    map<int, string> mp;
    map<int, string>::iterator itr;

    m.insert(make_pair("Hamim", 11));
    m.insert(make_pair("Tamim", 21));
    m.insert(make_pair("Arnob", 43));
    m["Nafis"] = 43;
    m["Jihan"] = 32;
    m["Rahat"] = 23;
    mp.insert({5, "bheem"});
    mp.insert({5, "bheem"});
    mp[1] = "babber";
    mp[3] = "kumar";

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "  " << it->second << endl;
    }
    cout << endl;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << "  " << itr->second << endl;
    }

    return 0;
}
