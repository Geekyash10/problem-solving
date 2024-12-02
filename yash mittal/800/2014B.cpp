// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     long long int n, k;
//     cin >> n >> k;
//     long long int cnt = 0;
//     for (long long int i = n - k + 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//         }
//         else
//         {
//             cnt++;
//         }
//     }
//     if ((cnt) % 2 == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }
// int main()
// {
//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    long long start = n - k + 1;
    long long end = n;

    long long odd_start = (start % 2 == 0) ? start + 1 : start;
    long long odd_end = (end % 2 == 0) ? end - 1 : end;

    long long cnt = (odd_end >= odd_start) ? ((odd_end - odd_start) / 2 + 1) : 0;

    if (cnt % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
