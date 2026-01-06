#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll a,b,c;
    cin>>a>>b>>c;
    if(a<b){
        cout<<"Second"<<endl;
    }
    else if(a>b){
        cout<<"First"<<endl;
    }
    else{
        if(c%2==0){
            cout<<"Second"<<endl;
        }
        else cout<<"First"<<endl;
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