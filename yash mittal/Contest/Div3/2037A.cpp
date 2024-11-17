#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (used[i])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (!used[j] && v[i] == v[j])
            {
                ans++;
                used[i] = true;
                used[j] = true;
                break;
            }
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