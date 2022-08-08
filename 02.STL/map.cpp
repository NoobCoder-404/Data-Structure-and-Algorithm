#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    map <string,int> m;
    map <string,int> :: iterator it;
    m.insert(make_pair("Hamim",11));
    m.insert(make_pair("Tamim",21));
    m.insert(make_pair("Arnob",43));
    m["Nafis"] = 43;
    m["Jihan"] = 32;
    m["Rahat"] = 23;


    for(it = m.begin(); it != m.end(); it++)
    {
        cout << it ->first << "  " << it ->second << endl;
    }


    return 0;
}
