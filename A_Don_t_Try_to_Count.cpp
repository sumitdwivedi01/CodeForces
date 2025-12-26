#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; 
    cin>>n;
    int m;
    cin>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int count=0;
        while(x.find(s)==string::npos){
            x=x+x;
            // cout<<x<<endl;
            count++;
            if(count>5){
                count=-1;
                break;
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