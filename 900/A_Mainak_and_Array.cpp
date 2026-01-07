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
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    int ans=a[n-1]-a[0];
    for(int i=1;i<n;i++){
        ans=max(ans,(a[i]-a[0]));
    }
    for(int i=0;i<n-1;i++){
        ans=max(ans,(a[n-1]-a[i]));
    }
    for(int i=0;i<n-1;i++){
        ans=max(ans,(a[i]-a[i+1]));
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