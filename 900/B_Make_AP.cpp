#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c){//if all are equal already
        cout<<"YES"<<endl;
        return;
    }
    int x1=(2*b-c)/a;
    int x2=(c+a)/(2*b);
    int x3=(2*b-a)/c;
    int r1=(2*b-c)%a;
    int r2=(c+a)%(2*b);
    int r3=(2*b-a)%c;
    if(r1==0 && x1>0){
        cout<<"YES"<<endl;
        return;
    }
    else if(r2==0 && x2>0){
        cout<<"YES"<<endl;
        return;
    }
    else if(r3==0 && x3>0){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;return;
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