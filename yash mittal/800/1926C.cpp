#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 200000;
    vector<int> sum(m);
    int s = 0;
    for (int i = 1; i <= m; i++)
    {
        int digit = 0;
        int temp = i;
        while (temp != 0)
        {
            digit += (temp % 10);
            temp /= 10;
        }
        sum[i - 1] = s + digit;
        s = sum[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sum[n - 1] << "\n";
    }
    return 0;
}