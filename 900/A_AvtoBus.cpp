#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    long long n;
    cin>>n;
    if(n<4 || n%2!=0){
        cout<<"-1"<<endl;
        return;
    }
    else{
        long long mn=n/6;
        if(n%6==0){
            mn=n/6;
        }
        else{
            mn++;
        }
        long long mx = n/4;
        cout<<mn<<" "<<mx<<endl;
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