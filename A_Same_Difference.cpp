#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int opCount=0;
    for(auto ch: s){
        if(ch!=s[n-1]){
            opCount++;
        }
    }
    cout<<opCount<<endl;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}