#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

     int n;
     cin>>n;
     string s;
     cin>>s;
     int cl=0;
     int cr=0;
     int mc=INT_MIN;
     for(int i=0;i<n;i++){
        if(s[i]=='<'){
            cl++;
            cr=0;
            mc=max(cl,mc);
        }
        else{
            cr++;
            cl=0;
            mc=max(cr,mc);
        }
     }   
     int ans=mc+1;
     cout<<ans<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}