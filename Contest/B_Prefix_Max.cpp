#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n;
    cin>>n;
    vector<ll> a(n);
    ll maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(a[i],maxi);
    }
    ll ans=n*maxi;
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