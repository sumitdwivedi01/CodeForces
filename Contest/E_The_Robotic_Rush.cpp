#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<char>c(k);
    for(int i=0;i<k;i++){
        cin>>c[i];
    }
    int mr=0;//max right +direction
    int ml=0;//max left -direction
    int cnt=0;
    for(int i=0;i<k;i++){
        if(c[i]=='R'){
            cnt++;
        }else{
            cnt--;
        }
        if(cnt>mr){
            mr=cnt;
        }
        if(cnt<ml){
            ml=cnt;
        }
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