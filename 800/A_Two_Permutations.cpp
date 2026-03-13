#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n<=3){
        if(a==n && b==n){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        return;
    }
    if(a==n && b==n){
        cout<<"Yes"<<endl;
        return;
    }
    if(a+b<=n-2){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
    return;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}