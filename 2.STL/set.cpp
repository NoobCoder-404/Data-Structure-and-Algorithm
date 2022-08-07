#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    set <string> s;
    set <string> :: iterator it;

    s.insert ("Hamim");
    s.insert ("Tamim");
    s.insert ("Arnab");

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }


    /**
    set <int > s;

    set <int> :: iterator it;

    s.insert(43);
    s.insert(42);
    s.insert(11);
    s.insert(23);

    it = s.find(43);
    s.erase(it);

    for(it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " " ;
    }

**/

    return 0;
}
