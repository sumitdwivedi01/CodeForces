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
    int cnt=0;
    int cmax=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt++;
        }else cnt=0;
        cmax=max(cnt,cmax);
    }
    cout<<cmax<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}