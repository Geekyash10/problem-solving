#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    long long int gcd;
    long long int a, b;
    cin >> a >> b;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    long long int lcm = (a * b) / gcd;
    cout << lcm << endl;
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