#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans(n);

    vector<pair<int, int>> a;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back({x, i});
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0;
    for (auto it : a)
    {
        int idx = it.second;
        ans[idx] = b[i];
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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