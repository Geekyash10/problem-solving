// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int size;
//     cin >> size;
//     vector<int> arr(size);
//     // vector for storing three values
//     vector<vector<int>> an;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     int i = 0;
//     int j = 1;
//     int ans = 0;
//     while (i < j && i < size && j < size)
//     {
//         if (arr[i] > arr[j])
//         {
//             ans++;
//             swap(arr[i], arr[j]);
//             vector<int> temp;
//             temp.push_back(i + 1);
//             temp.push_back(j + 1);
//             temp.push_back(1);
//             an.push_back(temp);
//             i = 0;
//             j = 1;
//         }
//         else
//         {
//             i++;
//             j++;
//         }
//     }
//     cout << an.size() << endl;
//     for (int i = 0; i < an.size(); i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << an[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }
