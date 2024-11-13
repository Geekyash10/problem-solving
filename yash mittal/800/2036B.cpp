#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int sum = 0;
        cin >> n >> k;
        if (n >= k)
        {
            for (int i = 0; i < k; i++)
            {
                int a, b;
                cin >> a >> b;
                sum += b;
            }
        }
        else
        {
            vector<vector<int>> att;
            for (int i = 0; i < k; i++)
            {
                int a, b;
                cin >> a >> b;
                att.push_back({a, b});
            }
            map<int, int> mp;
            for (int i = 0; i < k; i++)
            {
                mp[att[i][0]] += att[i][1];
            }
            vector<int> costs;
            for (auto &pair : mp)
            {
                costs.push_back(pair.second);
            }
            sort(costs.rbegin(), costs.rend());

            for (int i = 0; i < n && i < costs.size(); i++)
            {
                sum += costs[i];
            }
        }
        cout << sum << endl;
    }
}