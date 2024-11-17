#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int num;
    cin >> num;
    vector<int> arr(num);
    int sum = 0;
    int set = 0;
    int extra = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    set = sum / num;

    if (num == 1)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > set)
        {
            extra += arr[i] - set;
        }
        else if (arr[i] < set)
        {
            if (extra >= set - arr[i])
            {
                extra -= set - arr[i];
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
