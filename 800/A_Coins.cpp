#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n;
    cin>>n;
    ll k;
    cin>>k;
    if(k==1){
        cout<<"YES"<<endl;
        return;
    }
    if(n%2==0){
        cout<<"YES"<<endl;
        return;
    }
    else{//n is odd
        if(k%2==0 || k>n){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            return;
        }
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