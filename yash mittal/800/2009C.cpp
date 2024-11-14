#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int x, y, k;
        cin >> x >> y >> k;
        int a = x / k + bool(x % k);
        int b = y / k + bool(y % k);
        if (a > b)
        {
            cout << 2 * a - 1 << endl;
        }
        else if (a < b)
        {
            cout << 2 * b << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
}