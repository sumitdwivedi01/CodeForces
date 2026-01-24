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
    int cn=0;
    int cp=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cp++;
        }else cn++;
    }
    if(cn>cp){
        int cnt=0;
        while(cn>cp){
            cnt++;
            cn--;
            cp++;
        }
        if(cn%2==0){
            cout<<cnt<<endl;
            return;
        }else{
            cout<<cnt+1<<endl;
            return;
        }
    }else{
        if(cn%2==0){
            cout<<0<<endl;
            return;
        }else{
            cout<<1<<endl;
            return;
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