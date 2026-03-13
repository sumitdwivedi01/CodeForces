#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    string s;
    cin>>s;
    string t;
    cin>>t;
    int n=s.size();
    int m=t.size();
    unordered_map<char,int>mpp_t;
    for(int i=0;i<m;i++){
        mpp_t[t[i]]++;
    }
    for(int i=n-1;i>=0;i--){
        if(mpp_t[s[i]]>0){
            mpp_t[s[i]]--;
        }else{
            s[i]='.';
        }
    }
    string final="";
    for(int i=0;i<n;i++){
        if(s[i]!='.'){
            final+=s[i];
        }
    }
    if(final==t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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