#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0 && start > 0)
        {
            ans++;
            start -= 1;
        }
        else if (v[i] != 0 && v[i] >= m)
        {
            start += v[i];
        }
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