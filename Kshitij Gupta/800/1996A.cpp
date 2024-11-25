#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
          int n;
          cin >> n;
          int ans = n/4;
          n = n%4;
          ans += n/2;
          cout << ans << endl;
    }
}