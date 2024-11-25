#include<bits/stdc++.h>
using namespace std;

int main(){
    int process;
    cin >> process;
    int res;
    cin >> res;
    vector<vector<int>> alloc(process , vector<int>(res));
    vector<vector<int>> maxNeeds(process , vector<int>(res));
    vector<vector<int>> needMatrix(process , vector<int>(res));
 cout << "Enter alloc matrix - " << endl;
    for(int i = 0 ; i < process; i++){
        for(int r = 0 ; r < res ; r++){
             cin >> alloc[i][r];
        }
    }
 cout << "Enter max need matrix - " << endl;

     for(int i = 0 ; i < process; i++){
        for(int r = 0 ; r < res ; r++){
             cin >> maxNeeds[i][r];
        }
    }
 cout << "Enter availale resources - " << endl;

    vector<int> available(res);
    for(int i = 0 ; i < res ; i++){
        cin >> available[i];
    }
  cout << "Computing - " << endl;


    for(int i = 0 ; i < process ; i++){
        for(int j = 0 ; j < res ; j++){
            needMatrix[i][j] = maxNeeds[i][j] - alloc[i][j];
            cout << needMatrix[i][j] << " ";
        }
        cout << endl;
    }
    vector<int>visited(process , 0);
     vector<int> safeSequence;       // Store the safe sequence

    for(int i = 0 ; i < process ; i++){
        bool foundProcess = false;
          for(int p = 0 ; p < process ; p++){
            if(!visited[p]){
               bool canAllocate = true;
              for(int r = 0 ; r < res ; r++){
                    if(needMatrix[p][r] > available[r]){
                        canAllocate = false;
                        break;
                    }
              }
              if(canAllocate){
                visited[p] = 1;
                 cout << p << " " << endl;
                 for(int i = 0 ; i < res ; i++){
                    available[i] += alloc[p][i];
                 }
                 foundProcess = true;
                 break;
              }
            }
              
          }
          if(!foundProcess){
             cout << "System is not in safe state" << endl;
             return 0;
          }
    }


}


//  cout << "Enter max need matrix - " << endl;

// 0 1 0
// 2 0 0
// 3 0 2
// 2 1 1
// 0 0 2


// 7 5 3
// 3 2 2
// 9 0 2
// 2 2 2
// 4 3 3