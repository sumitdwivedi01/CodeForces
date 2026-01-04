#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll x;
    cin>>x;
    
    ll minsum=k*(k+1)/2;
    // Sum=k×(2n−k+1)​/2 sum of last k terms from 1 to n
    ll maxsum=k*(2*n-k+1)/2;
    // cout<<maxsum<<endl;

    if(x>=minsum && x<=maxsum){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
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