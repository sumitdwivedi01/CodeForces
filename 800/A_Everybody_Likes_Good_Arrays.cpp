#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    
    for(int i=0;i<n-1;i++){
        if(a[i]%2==a[i+1]%2){
            cnt++;
        }
    }
    cout<<cnt<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}