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
    //check if is it possible or not
    bool check=true;
    // for(int i=0;i<n;i++){
    //     if(a[i]<i){
    //         check=false;
    //         break;
    //     }
    // }
    // if(!check){
    //     // cout<<"-1"<<endl;
    //     return;
    // }
    //check if already increasing or not
    bool inc=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            inc=false;
            break;
        }
    }
    if(inc){
        cout<<"0"<<endl;
        return;
    }
    int cnt=0;
    check=true;
    for(int i=n-1;i>0;i--){
        while(a[i-1]>=a[i] && a[i-1]>0){
            a[i-1]/=2;
            cnt++;
        }
        if(a[i]==0){
            check=false;
            break;
        }
    }
    if(!check){
        cout<<"-1"<<endl;
        return;
    }
    cout<<cnt<<endl;







}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}