#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    ll old=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        old+=a[i];
    }
    vector<ll> psum(n+1);
    psum[0]=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        psum[i+1]=sum;
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll rem_sum=psum[r]-psum[l-1];
        ll ans=0;
        ll add_sum=(r-l+1)*k;
        ans+=old-rem_sum+add_sum;
        // cout<<ans<<endl;
        if(ans%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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