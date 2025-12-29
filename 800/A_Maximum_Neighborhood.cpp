#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int A[n][n];
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j]=x;
            x++;
        }
    }
    int max_result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp_result=A[i][j];
            if(i+1<n){
                temp_result+=A[i+1][j];
            }
            if(i-1>=0){
                temp_result+=A[i-1][j];
            }
            if(j+1<n){
                temp_result+=A[i][j+1];
            }
            if(j-1>=0){
                temp_result+=A[i][j-1];
            }
         
            max_result=max(max_result,temp_result);
        }
    }
    cout<<max_result<<endl;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}