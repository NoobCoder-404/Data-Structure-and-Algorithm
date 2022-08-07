#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    // 5 = 101;
    int i = 0;
    int ans = 0;
    cout << "Enter the Decimal Number : ";
    cin >> n;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + (pow(10, i) * bit); // formula : answer =answer + (10^i * bit)
        n = n >> 1;                     // right shift means divide by 2;
        i++;
    }

    cout << "Binary Number is : " << ans << endl;

    return 0;
}