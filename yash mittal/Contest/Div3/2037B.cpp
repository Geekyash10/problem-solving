#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    int maybeans = n - 2;
    if (mp[maybeans] != 0 && mp[1] != 0)
    {
        cout << 1 << " " << n - 2 << endl;
    }
    else
    {
        k = n - 2;
        for (int i = 1; i * i <= n; i++)
        {
            if (k % i == 0)
            {
                int x = i, m = k / i;
                if (mp[x] > 0 && mp[m] > 0)
                {
                    cout << x << " " << m << endl;
                    break;
                }
            }
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