#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter your input : ";
    cin >> str;

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << endl;

    int s = 0;
    int e = count - 1;
    while (s < e)
    {
        swap(str[s++], str[e--]);
    }

    cout << str;

    return 0;
}