#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b;
    cin>>a>>b;
    ll c,d;
    cin>>c>>d;
    if(d<b){
        cout<<-1<<endl;
        return;
    }
    ll dy=d-b;//y changed dy
    ll x=a+dy;//checking how much can x go for that difference
    if(c>x){
        cout<<-1<<endl;
        return;
    }
    else{
        ll dx=abs(x-c);
        ll ans=abs(dy)+abs(dx);
        cout<<ans<<endl;
        return;
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