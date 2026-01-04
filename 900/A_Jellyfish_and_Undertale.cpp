#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    if(a==1){
        cout<<a<<endl;
        return;
    }
    long long ans=b;
    for(int i=0;i<n;i++){
            ans+=min(x[i],a-1);
    }
    cout<<ans<<endl;
    // cout<<"c..."<<endl;
    // // while(c>0){
    // //     cout<<c<<" ";
    // //     if(c==1 && i<n){
    // //         c+=x[i];
    // //         c=min(c,a);
    // //         i++;
    // //     }
    // //     c--;
    // //     ans++;
    // // }
    // cout<<endl<<"ans ";
    // cout<<ans<<endl;


}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}