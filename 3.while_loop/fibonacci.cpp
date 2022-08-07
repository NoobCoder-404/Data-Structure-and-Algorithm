#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
    int n;
    cout << "Enter the limit : ";
    cin>>n;
    int t1 = 0;
    int t2 = 1;
    cout << t1 << " " << t2 << " ";
    for(int i= 3; i<=n; i++)
    {
        int t = t1 + t2;
        cout << t << " " ;
        t1 = t2;
        t2 = t;
    }


    return 0;
}
