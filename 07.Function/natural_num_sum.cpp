#include <iostream>
using namespace std;

int sum_num(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = sum_num(n);

    cout << "Sum : " << sum << endl;

    return 0;
}