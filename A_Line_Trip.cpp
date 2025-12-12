#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_gas=arr[0];
    for(int i=1;i<n;i++){
        max_gas=max(max_gas,arr[i]-arr[i-1]);
    }
    max_gas=max((x-arr[n-1])*2,max_gas);
    cout<<max_gas<<endl;

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}