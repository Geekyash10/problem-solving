#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> newArr(n);

    map<int, int> mpp;
    int val = 1;
    for (int i = 0; i < n; i++)
    {

        if (mpp[v[i]] == 0)
        {
            newArr[i] = v[i];
            mpp[v[i]]++;
        }
        else
        {
            while (mpp[val] != 0)
                val++;
            newArr[i] = val;
            mpp[val]++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << newArr[i] << " ";
    cout << endl;
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
