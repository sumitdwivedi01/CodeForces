#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    ll x;
    ll n;
    cin>>x>>n;
    bool Xeven=true;
    bool Neven=true;
    if(n==0){
        cout<<x<<endl;
        return;
    }
    if(n%2==0){
        Neven=true;
    }else{
        Neven=false;
    }
    if(x%2==0){
        Xeven=true;
    }else{
        Xeven=false;
    }
    if(Xeven && Neven){//both even
        if(n%4==0){
            cout<<x<<endl;
        }else{
            cout<<x+1<<endl;
        }
    }else if(!Xeven && Neven){//if x odd and n even
        if(n%4==0){
            cout<<x<<endl;
        }else{
            cout<<x-1<<endl;
        }
    }else if(Xeven && !Neven){//if xeven and n is odd
        if((n-1)%4==0){
            cout<<x-n<<endl;
        }else{
            cout<<x+n+1<<endl;
        }
    }else{//both odd
        if((n-1)%4==0){
            cout<<x+n<<endl;
        }else{
            cout<<x-n-1<<endl;
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