#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int s0=0;
    int e0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            s0++;
        }
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            e0++;
        }
        else break;
    }
    int max0=s0+e0;
    int cont0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cont0++;
            max0=max(max0,cont0);
        }
        else cont0=0;
    }
    cout<<max0<<endl;

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}