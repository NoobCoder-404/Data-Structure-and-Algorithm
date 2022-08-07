#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int original = n;
    int sum = 0;
    while(n!= 0)
    {
        int lastDigit = n%10;
        sum = sum *10 + lastDigit;
        n/=10;
    }
    if(sum == original)
    {
        cout << "Palindrome Number" << endl;
    }
    else{
        cout << "Not Palindrome Number" << endl;
    }

    return 0;
}
