#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    int max_sleep=0;
    int tempk=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(tempk==0){
                max_sleep++;
            }
            else tempk--;
        }
        else tempk=k;
    }
    cout<<max_sleep<<endl;

    
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}