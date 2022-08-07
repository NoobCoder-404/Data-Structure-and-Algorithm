#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, flag = 0;

    cout << "Enter the Number : ";
    cin >> n; // 1234
    int original = n;
    int numb = n;
    int sum = 0;

    while (numb != 0)
    {
        flag++;
        numb /= 10;
    }

    while (n != 0)
    {
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, flag);
        n = n / 10;
    }

    if (original == sum)
    {
        cout << "Armstrong Number " << endl;
    }
    else
    {
        cout << "Not Armstrong Number " << endl;
    }

    return 0;
}
