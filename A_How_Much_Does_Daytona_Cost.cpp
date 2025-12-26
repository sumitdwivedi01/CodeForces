#include <bits/stdc++.h>
using namespace std;
 
void solve(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool isExist=false;
    for(int i=0;i<n;i++){
        if(k==a[i]){
            isExist=true;
            break;
        }
    }
    if(isExist){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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