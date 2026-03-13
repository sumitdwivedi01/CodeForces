#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool static comp(pair<int,int>&p1 , pair<int,int>&p2){
    return p1.second<p2.second;
}
void solve(){

    ll n,p;
    cin>>n>>p;
    vector<pair<int,int>>a(n);
    ll cost=p;
    ll left=n-1;
    for(int i=0;i<n;i++)cin>>a[i].first;
    for(int i=0;i<n;i++)cin>>a[i].second;
    sort(a.begin(),a.end(),comp);
    ll curr=a[0].second;
    for(int i=0;i<n;i++){
        curr=a[i].second;
        if(curr>p){
            break;
        }
        if(a[i].first>=left){
            cost+=curr*left;
            left=0;
            break;
        }else{
            cost+=curr*a[i].first;
            left-=a[i].first;
        }
    }
    cost+=p*left;
    cout<<cost<<endl;



}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}