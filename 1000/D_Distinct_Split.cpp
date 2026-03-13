#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<char>pre;
    vector<ll>prefix(n);
    set<char>suff;
    vector<ll>suffix(n);
    for(int i=0;i<n;i++){
        pre.emplace(s[i]);
        prefix[i]=pre.size();
    }
    for(int i=n-1;i>=0;i--){
        suff.emplace(s[i]);
        suffix[i]=suff.size();
    }
    ll maxlen=0;
    // for(auto it:prefix){
    //     cout<<it<<' ';
    // }
    // cout<<endl;
    // for(auto it:suffix){
    //     cout<<it<<' ';
    // }
    // cout<<endl;
    for(int i=0;i<n-1;i++){
        maxlen=max(maxlen,prefix[i]+suffix[i+1]);
    }
    cout<<maxlen<<endl;

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}