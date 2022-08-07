#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

bool comparator (pair<int,string>a,pair<int,string>b)
{
    return a.second > b.second;
}


int main()
{
    /**
    pair <string,int> p;
    // p = make_pair("hamim",1);
    p = {"dipto",1};

    cout << p.first << " " << p.second << endl;

    **/

    vector <pair <int,string> >v;
    vector <pair<int,string> > :: iterator it;
    v.push_back(make_pair(21,"Dipto"));
    v.push_back(make_pair(22, "Arnab"));
    v.push_back(make_pair(23, "Baker"));

    sort(v.begin(),v.end(),comparator);

    for(it = v.begin(); it != v.end();  it++ )
    {
        cout << it->first << "  " << it->second << endl;
    }

    getch();
}
