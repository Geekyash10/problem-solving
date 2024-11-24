#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<char> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    if (n > 2)
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] == '*' && a[i + 1] == '*')
            {
                break;
            }
            else if (a[i] == '@')
            {
                cnt++;
                if (i == n - 2)
                {
                    if (a[i + 1] == '@')
                    {
                        cnt++;
                    }
                }
            }
        }
        cout << "cnt" << cnt << endl;
    }
    else if (n == 2)
    {
        if (a[1] == '@')
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    else if (n == 1)
    {

        cout << 0 << endl;
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