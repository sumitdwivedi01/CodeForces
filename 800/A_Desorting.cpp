#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mdif=INT_MAX;
    for(int i=n-1;i>0;i--){
        int diff=a[i]-a[i-1];
        mdif=min(mdif,diff);
    }
    if(mdif<0){
        cout<<"0"<<endl;
        return;
    }
    else{
        int ans = (mdif/2)+1;
        cout<<ans<<endl;
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