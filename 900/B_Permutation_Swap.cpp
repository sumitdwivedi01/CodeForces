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
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(a[i]!=i+1){
                ans.push_back(abs(a[i]-(i+1)));
            }
        }
        int g=ans[0];
        for(int i=0;i<ans.size();i++){
            g=gcd(ans[i],g);
        }
        cout<<g<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}