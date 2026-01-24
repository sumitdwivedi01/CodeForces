#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int g=a[0];
    for(int i=0;i<n;i++){
        g=gcd(g,a[i]);
    }
    int gmn=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x=gcd(a[i],a[j]);
            gmn=min(gmn,x);
        }
    }
    // cout<<g<<endl;
    if(gmn>2){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
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