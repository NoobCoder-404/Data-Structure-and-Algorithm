#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

bool comparator (int a, int b)
{
    return a>b;
}

int main()
{
    vector <int> v;
    vector <int> :: iterator it;
    int a;
    for(int i = 0; i<5; i++)
    {
        cin>> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), comparator);

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;




    getch();
}
