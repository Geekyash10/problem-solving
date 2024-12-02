#include <iostream>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt++;
            if (cnt == m)
            {
                ans++;
                i += k - 1;
                cnt = 0;
            }
        }
        else
            cnt = 0;
    }
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
