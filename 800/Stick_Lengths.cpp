#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    ll mid=n/2;
    ll x = s[mid];
    ll count=0;
    for(int i=0;i<n;i++){
        count+=abs(s[i]-x);
    }
    cout<<count;
}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}