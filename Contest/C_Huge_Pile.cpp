#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll cnt=0;
    ll t=n;
    if(n==k){
        cout<<"0"<<endl;
        return;
    }
    while(t>1){
            cnt++;
            ll x=t/2;
            ll y=(t+1)/2;
            if(x==k){
                cout<<cnt<<endl;
                return;
            }
            if(y==k){
                cout<<cnt<<endl;
                return;
            }
            if(x%2!=0){
                t=x;
            }else t=y;

    }
    cout<<"-1"<<endl;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}