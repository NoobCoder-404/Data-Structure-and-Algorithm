#include <iostream>
using namespace std;
// formula = (n * 2) - (2 * row);
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int j = 1; j <= ((n * 2) - (2 * i)); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int j = 1; j <= ((n * 2) - (2 * i)); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}