#include <bits/stdc++.h>
using namespace std;
 
void solve(){

    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='Y'){
            count++;
        }
        if(count>=2){
            cout<<"NO"<<endl;
            return;
        }
    }

    if(count<2)cout<<"YES"<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}