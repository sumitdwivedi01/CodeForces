#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n;
    cin>>n;
    ll w;
    cin>>w;
    if(w==1){
        cout<<0<<endl;
        return;
    }
    ll needed=n/w;
    ll ans = n-needed;
    cout<<ans<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}