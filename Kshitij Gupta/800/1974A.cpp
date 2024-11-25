// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y;
//         cin >> x >> y;
//         // 5 * 3
//         int screen = 0;
//         int leftOutBlock = 0;
//         if (y % 2 == 1)
//         {
//             screen = y / 2 + 1;
//             leftOutBlock = 7 * y / 2 + 11;
//         }
//         else
//         {
//             leftOutBlock = 7 * y / 2;
//             // min
//             screen = y / 2;
//         }
//         int rem = x - leftOutBlock;
//         if (rem > 0)
//         {
//             if (rem % 15 == 0)
//             {
//                 screen += rem / 15;
//             }
//             else
//             {
//                 screen += rem / 15 + 1;
//             }
//         }
//         cout << screen << endl;
//     }
// }





#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        // 5 * 3
        int screen = 0;
        int leftOutBlock = 0;
        if (y % 2 == 1)
        {
            screen += (y / 2) + 1;
            leftOutBlock = 7 * (y / 2) + 11;
        }
        else
        {
            leftOutBlock = 7 * (y / 2);
            // min
            screen += y / 2;
        }
        int rem = x - leftOutBlock;
        if (rem > 0)
        {
            if (rem % 15 == 0)
            {
                screen += rem / 15;
            }
            else
            {
                screen += (rem / 15) + 1;
            }
        }
        cout << screen << endl;
    }
}
