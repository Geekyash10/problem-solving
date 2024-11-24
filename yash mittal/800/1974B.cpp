#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }

    vector<char> final;
    for (auto &it : mp)
    {
        final.push_back(it.first);
    }

    sort(final.begin(), final.end());

      map<char, char> word;
    int i = 0;
    int j = final.size() - 1;
    while (i <= j)
    {
        mp[final[i]] = final[j];
        mp[final[j]] = final[i];
        i++;
        j--;
    }
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = mp[s[i]];
    }
    cout << s << endl;
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
