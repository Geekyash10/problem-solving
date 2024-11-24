#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    int l = 0, r = n + 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    ll val = 1;
    vector<int> vec;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'L')
        {
            val *= arr[l];
            l--;
        }
        else
        {
            val *= arr[r];
            r++;
        }
        val %= m;
        vec.push_back(val);
    }
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}