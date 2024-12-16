#include <iostream>
using namespace std;

void solve()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int sR1 = min(m, a);
    int rSeats = m - sR1;

    int sR2 = min(m, b);
    rSeats += m - sR2;

    int left = min(rSeats, c);

    int ans = sR1 + sR2 + left;

    cout << ans << endl;
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
