#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of array - ";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int capacity;
    cin >> capacity;

    queue<int> q;
    unordered_set<int> s;
    int hit = 0, miss = 0;
    for (auto page : arr)
    {
        if (s.find(page) != s.end())
        {
            hit++;
        }
        else
        {
            miss++;
            if (q.size() == capacity)
            {
                int oldest = q.front();
                q.pop();
                s.erase(oldest);
            }
            q.push(page);
            s.insert(page);
             // showing each state
        cout << "Memory: ";
        queue<int> q2 = q;
        while (!q2.empty())
        {
            cout << q2.front() << " ";
            q2.pop();
        }
        cout << endl;
        }

       
    }

     cout << "Total Hits: " << hit << endl;
    cout << "Total Misses: " << miss << endl;
}

// 7 0 1 2 0 3 0 4 2 3 0 3 1 2 0