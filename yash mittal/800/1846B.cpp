#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != '.')
        {
            cout << arr[i][0] << endl;
            return;
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] != '.')
        {
            cout << arr[0][j] << endl;
            return;
        }
    }

    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.')
    {
        cout << arr[0][0] << endl;
        return;
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.')
    {
        cout << arr[0][2] << endl;
        return;
    }

    cout << "DRAW" << endl;
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
