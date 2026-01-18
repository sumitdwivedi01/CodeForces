#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<pair<ll , ll>> p(m);
    for(int i=0;i<m;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    int mresult=0;
    vector<int> res(n,0);
    vector<int> ad(n,0);
    for(auto [f,s]:p){
        int i=f-1;
        if(res[i]!=mresult){
            res[i]=mresult;
            ad[i]=0;
        }
        ad[i]+=s;
        if(ad[i]+a[i]>h){
            mresult++;
            res[i]=mresult;
            ad[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(res[i]!=mresult){
            res[i]=mresult;
            ad[i]=0;
        }
        a[i]+=ad[i];
    }
    for(auto it: a){
        cout<<it<<" ";
    }
    cout<<endl;
    




}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}