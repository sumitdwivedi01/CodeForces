#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    string s;
    cin>>s;
    int n=s.length();
    int ab=0;
    int ba=0;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='a' && s[i+1]=='b'){
            ab++;
        }
        if(s[i]=='b' && s[i+1]=='a'){
            ba++;
        }
    }
    if(ab==ba){
        cout<<s<<endl;
        return;
    }
    else{
        if(s[0]=='a'){
            s[0]='b';
        }else{
            s[0]='a';
        }
    }
    cout<<s<<endl;






}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}