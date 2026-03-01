#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll md=0;
    ll p=0;
    int ind=0;
    for(int i=0;i<n;i++){
        int m=a[i]%x;
        if(m>=md){
            if(a[i]>p){    
                md=m;
                ind=i;
            }
        }
    }
    ll maxi1=a[ind];
    for(int i=0;i<n;i++){
        if(i!=ind){
            maxi1+=(a[i]/x)*y;
        }
    }
    ll maxi2=0;
    ll bgst= INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>bgst){
            bgst=a[i];
            ind=i;
        }
    }
    maxi2=bgst;
    for(int i=0;i<n;i++){
        if(i!=ind){
            maxi2+=(a[i]/x)*y;
        }
    }
    ll ans=max(maxi1,maxi2);
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