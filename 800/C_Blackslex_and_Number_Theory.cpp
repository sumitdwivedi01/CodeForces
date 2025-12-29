#include <bits/stdc++.h>
using namespace std;
 
void solve(){

        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mn=*min_element(a.begin(),a.end());
        int rem=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==mn)continue;
            rem=min(a[i]-mn,rem);
        }
        int k=max(mn,rem);
        cout<<k<<endl;




}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}