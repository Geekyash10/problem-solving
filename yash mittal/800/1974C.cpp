// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// void solve()
// {
//     long long int n;
//     cin >> n;
//     vector<long long int> v(n);
//     for (long long int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     vector<tuple<long long int, long long int, long long int>> s;
//     for (int i = 0; i < n - 2; i++)
//     {
//         s.push_back({v[i + 0], v[i + 1], v[i + 2]});
//     }
//     long long b1, b2, b3, c1, c2, c3;
//     long long int cnt = 0;
//     vector<tuple<long long int, long long int, long long int>> triplets(s.begin(), s.end());
//     for (int i = 0; i < triplets.size(); i++)
//     {
//         tie(b1, b2, b3) = triplets[i];
//         for (int j = i + 1; j < triplets.size(); j++)
//         {
//             tie(c1, c2, c3) = triplets[j];
//             if (b1 != c1 && b2 == c2 && b3 == c3)
//             {
//                 cnt++;
//             }
//             else if (b1 == c1 && b2 != c2 && b3 == c3)
//             {
//                 cnt++;
//             }
//             else if (b1 == c1 && b2 == c2 && b3 != c3)
//             {
//                 cnt++;
//             }
//         }
//     }
//     cout << cnt << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    map<vector<ll>, ll> mp;
    ll n, a, b, c, sum = 0;
    cin >> n >> a >> b;
    ll m = n - 2;
    while (m--)
    {
        cin >> c;
        mp[{0, b, c}]++;
        mp[{a, 0, c}]++;
        mp[{a, b, 0}]++;
        mp[{a, b, c}]++;
        sum += mp[{0, b, c}] + mp[{a, 0, c}] + mp[{a, b, 0}] - 3 * mp[{a, b, c}];
        a = b;
        b = c;
    }
    cout << sum << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
