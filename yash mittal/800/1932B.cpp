#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long currentYear = 0;

    for (int it : a)
    {
        currentYear = (currentYear / it + 1) * it;
    }

    cout << currentYear << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
