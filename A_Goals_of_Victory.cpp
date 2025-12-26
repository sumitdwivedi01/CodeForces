#include <bits/stdc++.h>
using namespace std;
 
void solve(){

    int n;
    cin>>n;
    vector<int> e(n-1);
    for(int i=0;i<n-1;i++){
        cin>>e[i];
    }
    int sum=0;
    for(int i=0;i<e.size();i++){
        sum+=e[i];
    }
    int ans=0-sum;
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