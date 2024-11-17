#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    int startmax = 0;
    int endmax = 0;
    int startidx = 1;
    int endidx = n;
    int starting = v[0];
    for (int i = 1; i < n; i++)
    {
        if (starting == v[i])
        {
            startmax++;
            startidx++;
        }
        else
        {
            break;
        }
    }
    int midstartidx = 1;
    int midendidx = n;
    int x = 0;
    int y = n - 1;
    while (x < y)
    {
        if (v[x] != v[y])
        {
            break;
        }
        else
        {
            midstartidx++;
            midendidx--;
        }
        x++;
        y--;
    }
    int ending = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (ending == v[i])
        {
            endmax++;
            endidx--;
        }
        else
        {
            break;
        }
    }

    int ans2 = midendidx - midstartidx + 1;

    if (startmax >= endmax)
    {

        // cout << "ans" << " " << n - startidx << endl;
        ans = n - startidx;
        if (ans2 < ans)
        {
            cout << ans2 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    else
    {
        ans = endidx - 1;
        if (ans2 < ans)
        {
            cout << ans2 << endl;
        }
        else
        {
            cout << ans << endl;
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