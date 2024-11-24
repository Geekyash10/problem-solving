// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// void solve()
// {
//     map<char, int> mp_words;
//     mp_words['C'] = 1;
//     mp_words['D'] = 2;
//     mp_words['H'] = 3;
//     mp_words['S'] = 4;
//     int n;
//     cin >> n;
//     char ch;
//     cin >> ch;
//     mp_words[ch] = 5;
//     vector<string> s(2 * n);

//     for (int i = 0; i < 2 * n; i++)
//     {
//         cin >> s[i];
//     }

//     // vector<string> copy;
//     // for (int i = 0; i < 2 * n; i++)
//     // {
//     //     copy.push_back(s[i]);
//     // }
//     for (int i = 0; i < 2 * n; i++)
//     {
//         string word = s[i];
//         cout << "word" << word << endl;

//         word[1] = '0' + mp_words[word[1]];
//         cout << "changed_word" << word << endl;
//         char swp = word[0];
//         word[0] = word[1];
//         word[1] = swp;
//         cout << "ran" << " " << word << endl;
//         s[i] = word;
//     }

//     sort(s.begin(), s.end());
//     for (int i = 0; i < 2 * n; i++)
//     {
//         cout << s[i] << " hello" << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] < s[i + 1])
//         {

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