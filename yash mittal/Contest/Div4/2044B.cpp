#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string t;
    cin >> t;
    string s = "";
    for (auto it : t)
    {
        if (it == 'p')
        {
            s += 'q';
        }
        else if (it == 'q')
        {
            s += 'p';
        }
        else
        {
            s += 'w';
        }
    }
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
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