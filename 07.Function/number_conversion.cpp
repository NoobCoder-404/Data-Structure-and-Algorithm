#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n) // formula =sum + (lastDigit * 2^i)
{

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans += pow(2, i) * digit;
        n /= 10;
        i++;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = ans + pow(8, i) * digit;
        n /= 10;
        i++;
    }
    return ans;
}

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int j = 0;
    int length = n.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + (pow(16, j) * (n[i] - 48));
            j++;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + (pow(16, j) * (n[i] - 55));
            j++;
        }
    }
    return ans;
}

void decimalToBinaray(int n)
{
    vector<int> v;
    while (n != 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
}

int decimalToOctal(int n)
{
    // formula = answer + remainder( pow(10,i))
    int ans = 0, i = 0;
    while (n != 0)
    {
        int remainder = n % 8;
        ans = ans + remainder * pow(10, i);
        n /= 8;
        i++;
    }
    return ans;
}

void decimalToHexadecimal(int n)
{
    char hexa[100];
    int i = 0;
    while (n != 0)
    {
        int remainder = n % 16;
        if (remainder < 10)
        {
            hexa[i++] = 48 + remainder;
        }
        else
        {
            hexa[i++] = 55 + remainder;
        }
        n /= 16;
    }
    cout << "Decimal to Hexadecimal : ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexa[j];
    }
    cout << endl;
}

int main()
{
    /*
    int n;
    cin >> n;

    int decimal = binaryToDecimal(n);
    cout << "Binary to Decimal : " << decimal << endl;


    int decimal = octalToDecimal(n);
    cout << "Ocatal to Decimal : " << decimal << endl;



    string n;
    cin >> n;
    cout << "Hexadecimal to Decimal : " << hexadecimalToDecimal(n) << endl;

    int n;
    cin >> n;
    decimalToBinaray(n);


    int n;
    cin >> n;
    cout << "Decimal to Ocatal : " << decimalToOctal(n) << endl;
    */
    int n;
    cin >> n;
    decimalToHexadecimal(n);

    return 0;
}