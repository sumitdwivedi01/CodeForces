#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int j=n-1;
    int cnt=n;
    while(i<=j){
        if(s[i]!=s[j]){
            i++;
            j--;
            cnt-=2;
        }else break;
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