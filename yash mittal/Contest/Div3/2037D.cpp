#define ll long long
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, m, l;
    cin >> n >> m >> l;

    vector<pair<int, int>> h(n), p(m);

    for (int i = 0; i < n; ++i)
    {
        cin >> h[i].first >> h[i].second;
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> p[i].first >> p[i].second;
    }

    ll pow = 1;
    ll ans = 0;
    int j = 0;
    priority_queue<ll> pq;

    for (int i = 0; i < n; ++i)
    {
        while (j < m && p[j].first < h[i].first)
        {
            pq.push(p[j].second);
            ++j;
        }

        ll required = h[i].second - h[i].first + 2;

        while (!pq.empty() && required > pow)
        {
            pow += pq.top();
            pq.pop();
            ++ans;
        }

        if (required > pow)
        {
            cout << -1 << '\n';
            return;
        }
    }

    cout << ans << '\n';
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