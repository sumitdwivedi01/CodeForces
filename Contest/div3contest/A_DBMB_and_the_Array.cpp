#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll n,s,x;
    cin>>n>>s>>x;
    vector<int> a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>s){
        cout<<"NO"<<endl;
        return;
    }
    else{
        ll diff=s-sum;
        if(diff%x==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
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