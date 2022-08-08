#include <iostream>
using namespace std;
// row =3 and col = 9;
// formula = (row + col)%4==0 and row == 2 and col %4 == 0;
int main()
{
    int n; // 9
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}