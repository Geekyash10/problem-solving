#include <iostream>
using namespace std;
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

void solve()
{
    int n;
    cin >> n;
    if (n <= 4)
    {
        cout << -1 << endl;
    }
    else if (n == 5)
    {
        cout << "1 3 5 4 2" << endl;
    }
    else if (n == 6)
    {
        cout << "1 3 5 4 2 6" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            if (i != 7)
            {
                cout << i << " ";
            }
        }
        cout << 7 << " " << 2 << " ";
        for (int i = 4; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
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
