#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int s;
    cin>>s;
    int k;
    cin>>k;
    int m;
    cin>>m;

    if(s==k){
        int x=m%k;
        int ans = s-x;
        cout<<ans<<endl;
        return;
    }
    else if(s>k){
        int f=m/k;
        if(f%2==0){
            //even
            int crr = m%k;
            int ans = s-crr;
            cout<<ans<<endl;
            return;
        }
        else{
            //odd
            int crr = m%k;
            int ans = k-crr;
            cout<<ans<<endl;
            return;

        }
    }
    else{//s<k
            int x=m%k;
            int ans = max(0,(s-x));
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