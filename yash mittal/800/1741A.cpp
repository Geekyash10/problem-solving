#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();

    if (a[n - 1] == b[m - 1])
    {
        if (a[n - 1] == 'S')
        {
            if (a.size() > b.size())
                cout << '<' << endl;
            else if (a.size() < b.size())
                cout << '>' << endl;
            else
                cout << '=' << endl;
        }
        else if (a[n - 1] == 'L')
        {
            if (a.size() > b.size())
                cout << '>' << endl;
            else if (a.size() < b.size())
                cout << '<' << endl;
            else
                cout << '=' << endl;
        }
        else
            cout << '=' << endl;
        return;
    }

    if ((a[n - 1] == 'M' && b[m - 1] == 'S') || (a[n - 1] == 'L' && b[m - 1] == 'M') || (a[n - 1] == 'L' && b[m - 1] == 'S'))
    {
        cout << '>' << endl;
    }
    else if ((a[n - 1] == 'S' && b[m - 1] == 'L') || (a[n - 1] == 'M' && b[m - 1] == 'L') || (a[n - 1] == 'S' && b[m - 1] == 'M'))
    {
        cout << '<' << endl;
    }
    else
        cout << '=' << endl;
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
