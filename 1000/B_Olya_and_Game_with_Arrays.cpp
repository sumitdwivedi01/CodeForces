#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> m(n);
    ll beauty=0;
    int mini=INT_MAX;
    vector<pair<int,int>> vp(n);
    for(int i=0;i<n;i++){
        cin>>m[i];
        vector<int>a(m[i]);
        int m1=INT_MAX;//mini 1
        int mi=0;//mini index
        int m2=INT_MAX;//mini 2
        for(int j=0;j<m[i];j++){
            cin>>a[j];
            if(a[j]<m1){
                m1=a[j];
                mi=j;
            }
        }
        for(int j=0;j<m[i];j++){
            if(j!=mi){
                if(a[j]<m2){
                    m2=a[j];
                }
            }
        }
        mini=min({mini,m1,m2});
        vp[i]={m1,m2};
    }
    int c=INT_MAX;
    for(int i=0;i<n;i++){
        beauty+=max(vp[i].first,vp[i].second);
        c=min(max(vp[i].first,vp[i].second),c);
    }
    beauty-=c;
    beauty+=mini;
    cout<<beauty<<endl;
        





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}