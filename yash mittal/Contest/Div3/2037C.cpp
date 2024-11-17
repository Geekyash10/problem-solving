// #include <iostream>
// using namespace std;
// int checkprime(int n)
// {
//     int flag = 0;
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     return flag;
// }

// void solve()
// {

//     int n;
//     cin >> n;
//     int f = checkprime(n);
//     if (f == 0)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         if (n % 2 == 0)
//         {
//             for (int i = 0; i < n / 2; i++)
//             {
//                 cout << i + 1 << " " << n - i << " ";
//             }
//         }
//         else
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 if (i % 2 == 0)
//                 {
//                     cout << i << " ";
//                 }
//             }
//             for (int i = 1; i <= n; i++)
//             {
//                 if (i % 2 != 0)
//                 {
//                     cout << i << " ";
//                 }
//             }
//         }
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
