#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    while(t--){
          int n;
          cin >> n;
          vector<char> s(n);
          for(int i = 0 ; i < n ; i++){
            cin >> s[i];
          }
          
          set <char> st;
          for(auto itr : s){
            st.insert(itr);
          }
          string s2;
          for(auto itr : st){
             s2 += itr;
          }
        //   cout << s2 << endl;

          map<char,char> m;
          int j = s2.length() -1;;
          for(int i = 0 ; i < s2.length() ; i++){
            m[s2[i]] = s2[j--];
          }
        //   for(auto temp : m){
        //     cout << temp.first << " " << temp.second << endl;
        //   }

          for(int i = 0 ; i < n; i++){
            cout << m[s[i]];
          }
          cout << endl;
    }
}