#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (small > v[i])
        {
            small = v[i];
        }
    }
    int check = 1;
    if (small % 2 == 0)
    {
        check = 1;
    }
    else
    {
        check = 0;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if ((v[i] % 2 != 0 && check == 1))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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