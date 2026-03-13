#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n,k,q;
    cin>>n>>k>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll r=0;
    ll crr=0;
    ll cnt=0;
    while(r<n){
       if(a[r]<=q){
        crr++;
       }else{
        crr=0;
       }
       if(crr>=k){
        cnt+=crr-k+1;
       }
       r++;
    }
    cout<<cnt<<endl;

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}