#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    int freq=INT_MIN;
    for(auto i:mpp){
        freq=max(freq,i.second);
    }
    int op=0;
    while(freq<n){
        op++;
        if(freq*2<=n){
            op+=freq;
            freq*=2;
        }
        else{
            op+=n-freq; 
            freq=n;
        }
    }
    cout<<op<<endl;
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}