#include <bits/stdc++.h>
using namespace std;

int countClimbStairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return countClimbStairs(n - 1) + countClimbStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int ans = countClimbStairs(n);
    cout << ans << endl;

    return 0;
}