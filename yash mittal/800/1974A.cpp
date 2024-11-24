#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    int ans = 0;
    // if (y % 2 == 0)
    // {
    //     ans += y / 2;
    // }
    // else
    // {
    //     ans += (y / 2) + 1;
    // }
    // if (y == 1)
    // {
    //     x = x - (ans * 11);
    // }
    // else
    // {
    //     x = x - (ans * 7);
    // }
    // if ((ans * 7) < x)
    // {
    //     if (x <= 15)
    //     {
    //         ans += 1;
    //     }
    //     else
    //     {
    //         if (x % 15 == 0)
    //         {
    //             ans += x / 15;
    //         }
    //         else
    //         {
    //             ans += (x / 15) + 1;
    //         }
    //     }
    // }
    // else if (x > 0)
    // {
    //     ans += 1;
    // }
    if (y % 2 == 0)
    {
        ans += y / 2;
        x = x - (ans * 7);
        if (x > 0 && x < 15)
        {
            ans += 1;
        }
        else if (x > 0)
        {
            if (x % 15 == 0)
            {
                ans += x / 15;
            }
            else
            {
                ans += (x / 15) + 1;
            }
        }
    }
    else if (y > 1 && y % 2 != 0)
    {
        y = y - 1;
        ans += y / 2;
        x = x - (ans * 7);
        ans += 1;
        x = x - (1 * 11);
        if (x > 0 && x < 15)
        {
            ans += 1;
        }
        else if (x > 0)
        {
            if (x % 15 == 0)
            {
                ans += x / 15;
            }
            else
            {
                ans += (x / 15) + 1;
            }
        }
    }
    else if (y == 0)
    {
        ans += x / 15;
    }
    else if (y == 1)
    {
        ans += 1;
        x = x - 11;
        if (x > 0 && x < 15)
        {
            ans += 1;
        }
        else if (x > 0)
        {
            if (x % 15 == 0)
            {
                ans += x / 15;
            }
            else
            {
                ans += (x / 15) + 1;
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