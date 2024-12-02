#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += abs(v[i]);
    }
    long long int cnt = 0;
    long long int system = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            cnt++;
        }
        else if (v[i] > 0)
        {
            if (cnt > 0)
            {
                system++;
            }
            cnt = 0;
        }
    }
    if (cnt > 0)
    {
        system++;
    }
    // cout << "sum" << " " << sum << endl;
    // cout << "system" << " " << system << endl;
    cout << sum << " " << system << endl;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}