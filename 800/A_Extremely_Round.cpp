#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int x=n;
    int ans=0;
    while(x!=0){
        if(x>9){
            ans+=9;
        }else{
            ans+=x;
        }
        x/=10;
    }
    cout<<ans<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}