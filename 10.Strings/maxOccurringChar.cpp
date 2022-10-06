#include <bits/stdc++.h>
using namespace std;

char getMaxOccCharacter(string s)
{

    // create an array of count of characters
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            int number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    // find maximum occurring character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cout << "Enter your string : ";
    cin >> s;
    cout << "Max Occurring Character : " << getMaxOccCharacter(s) << endl;

    return 0;
}
