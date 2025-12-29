#include <bits/stdc++.h>
using namespace std;
 
void solve(){

    vector<vector<char>> board(10,vector<char>(10));
    int score=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>board[i][j];
            if(board[i][j]=='X'){
                score+=1+min({i,j,9-i,9-j});
            }
        }
    }
    cout<<score<<endl;




}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}