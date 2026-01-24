#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(n);
    for(int i=0;i<n;i++){
        b[i]=n+1-a[i];
    }
    for(auto it:b){
        cout<<it<<" ";
    }
    cout<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}