#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long long int sum = 0;
    if (n % 2 == 0)
    {
        sum += n;
        while (n != 1)
        {
            sum += n / 2;
            n = n / 2;
        }
    }
    else
    {
        if (n == 1)
        {
            sum = 1;
        }
        else
        {
            sum = 1;
            n = n - 1;
            sum += n;
            while (n != 1)
            {
                sum += n / 2;
                n = n / 2;
            }
        }
    }
    cout << sum << endl;
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