#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << n / 4 << endl;
    }
    else
    {
        if (n > 4)
        {
            int div = n / 4;
            int rem = n % 4;
            cout << div + 1 << endl;
        }
        else
        {
            cout << 1 << endl;
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
