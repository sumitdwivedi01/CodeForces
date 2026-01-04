#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<char,int> mpp;
    for(char c: s){
        mpp[c]++;
    }
    if((n-k)==1){
        cout<<"YES"<<endl;
        return;
    }
    int oc=0;
    for(auto it: mpp){
        if(it.second %2!=0){
            oc++;
        }
    }
    if(oc<=k+1){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    


}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}