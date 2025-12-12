#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k<=1){
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
        





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}