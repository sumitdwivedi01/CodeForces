 #include <bits/stdc++.h>
 using namespace std;
 #define ll long long
 void solve(){
 
    long long n;
    cin>>n;
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            ans++;
        }
        else break;
    }
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