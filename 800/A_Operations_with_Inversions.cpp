#include <bits/stdc++.h>
using namespace std;
 
void solve(){

        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int a1=a[0];
        for(int i=1;i<n;i++){
            if(a1>a[i])count++;
            else{
                a1=a[i];
            }
        }
        cout<<count<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}