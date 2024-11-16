#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t = s;
        int n;
        cin >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            char ch = t[a - 1];
            t[a - 1] = b + '0';
            // cout << "t" << t << endl;
            if (t.find("1100") != string ::npos)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
