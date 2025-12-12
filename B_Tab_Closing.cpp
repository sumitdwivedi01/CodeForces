#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int a , b , n;
    cin>>a>>b>>n;
    int m=n;
    int len = min(b,(a/m));
    int move=1;
    int new_len;
    for(int i=1;i<n;i++){
        if(b==a)break;
        m--;
        new_len=min(b,(a/m));
            if((a/m)<=b)continue;
            if(new_len!=len){
                move++;
                len=new_len;
            }
    }
    cout<< move<<endl;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}