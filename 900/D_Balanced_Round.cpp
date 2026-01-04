#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    sort(a.begin(),a.end());
    int lp=1;
    int len=1;
    for(int i=n-1;i>0;i--){
        int diff=a[i]-a[i-1];
        if(diff<=k){
            len++;
            lp=max(len,lp);
        }
        else{
            len=1;
        }
    }
    int ans=n-lp;
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