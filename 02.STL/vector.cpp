#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{

    /**
    vector <int> v(5, 2); //size 5, all value is 2;
    v.push_back(23); //vec[0] = 23;
    v.push_back(34); //vec[1] = 34;
    v.push_back(56); //vec[2] = 56;

    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] << "  " ;
    }
    cout << endl;

    **/

    vector <int> v;
    vector <int>::iterator it;

    int a;

    for(int i = 0; i<5; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for(it =v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";

    }
    cout << endl ;






    getch();
}
