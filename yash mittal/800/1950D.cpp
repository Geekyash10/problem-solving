#include <iostream>
using namespace std;
void solve()
{
    int a[] = {1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};
    int N = sizeof(a) / sizeof(a[0]);
    int t, n, u, i, j, m;
    cin >> n;
    if (n == 0)
    {
        cout << "yes" << endl;
    }
    u = 0;
    if (u == 0)
    {
        m = n;
        for (j = N - 1; j >= 1; j--)
        {
            while (m % a[j] == 0)
            {
                m /= a[j];
            }
        }
        if (m != 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}