#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int x;
    cin>>x;
    int k;
    cin>>k;

    if(x%k==0){
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<x<<endl;
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