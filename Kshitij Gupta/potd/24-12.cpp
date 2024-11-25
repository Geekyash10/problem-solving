#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {

      int row = box.size();
      int col = box[0].size();
      vector<vector<char>> ans(col);    
      for(int r = 0 ; r < row ; r++){
        int i = 0 , j = 1;
      while(i < col && j < col){
          if(box[r][i] == '#' && box[r][j] == '.'){
            box[r][j] = '#';
            box[r][i] = '.';
            i++ , j++;
          }
          else if(box[r][i] == '#' && box[r][j] == '#'){
             j++;
          }
          else if(box[r][j] == '*'){
            i = j+1;
            j = i+1;
          }
          else{
            i++ , j++;
          }
      } 
      }
 
    for(int i = 0 ; i < col ; i++){
     for(int j = row -1 ; j>=0 ; j--){
        ans[i].push_back(box[j][i]);
     }
    }
   

   return ans;
 
}
};