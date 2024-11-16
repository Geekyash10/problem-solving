#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        int count0 = 0;
        int count1 = 0;
        int max = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (arr[i] == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        int mini = (count0 % 2 == 1 && count1 % 2 == 1) ? 1 : 0;
        cout << mini << " " << min(count1, count0) << endl;
    }
}