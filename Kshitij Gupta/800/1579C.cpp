#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int cB = 0;
            for (auto ch : s)
            {
                if (ch == 'B')
                {
                    cB++;
                }
            }
            if (cB == s.length() / 2)
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