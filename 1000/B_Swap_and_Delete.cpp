#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    ll zc=0;
    ll oc=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            oc++;
        }else{
            zc++;
        }
    }
    if(zc==oc){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            zc--;
        }else{
            oc--;
        }
        if(zc==-1||oc==-1){
            break;
        }
    }
    if(zc==-1){
        cout<<oc<<endl;
    }else{
        cout<<zc<<endl;
    }
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}