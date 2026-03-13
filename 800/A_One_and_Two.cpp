#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n;
    cin>>n;
    vector<ll> a(n);
    int current=0;
    int total=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            total++;
        }
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(a[i]==2){
            current++;
        }
        if(total-current==current){
            ans=i+1;
            break;
        }
    }
    
    
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