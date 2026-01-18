#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;

    if(n==2){
        cout<<"2"<<endl;
        return;
    }
    if(n==3){
        cout<<"3"<<endl;
        return;
    }
    else{
        int ans=n%2;
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