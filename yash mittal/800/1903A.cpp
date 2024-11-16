#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        bool sorted = true;
        int prev = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i > 0 && prev > x)
            {
                sorted = false;
            }
            prev = x;
        }

        bool res = sorted || k > 1;
        cout << (res ? "YES" : "NO") << endl;
    }

    return 0;
}
