#include <bits/stdc++.h>
using namespace std;
string ans(string s, int a, int b, int n)
{
    int x = 0;
    int y = 0;
    int k = 100000;
    while (k-- > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                y++;
                if (x == a && y == b)
                {
                    return "YES";
                }
            }
            else if (s[i] == 'S')
            {
                y--;
                if (x == a && y == b)
                {
                    return "YES";
                }
            }
            else if (s[i] == 'E')
            {
                x++;
                if (x == a && y == b)
                {
                    return "YES";
                }
            }
            else if (s[i] == 'W')
            {
                x--;
                if (x == a && y == b)
                {
                    return "YES";
                }
            }
        }
        if (x == 0 && y == 0)
        {
            return "NO";
        }
    }
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        cout << ans(s, a, b, n) << endl;
    }
    return 0;
}