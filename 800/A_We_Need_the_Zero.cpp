#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    int xr=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        xr=xr^a[i];
    }
    if(xr==0){
        cout<<0<<endl;
        return;
    }
    else{
        int nxr=0;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            b[i]=a[i]^xr;
            nxr=nxr^b[i];
        }
        if(nxr==0){
            cout<<xr<<endl;
            return;
        }else{
            cout<<-1<<endl;
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