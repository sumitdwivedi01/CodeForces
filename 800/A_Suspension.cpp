#include <bits/stdc++.h>
using namespace std;
 
void solve(){

        int n;
        int y,r;
        cin>>n;
        cin>>y;
        cin>>r;
        int max_elemination=(y/2)+r;
        cout<<min(n,max_elemination)<<endl;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}