#include <bits/stdc++.h>
using namespace std;
 
void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int m=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            count++;
            if(count<=2){
                m++;
            }
            if(count==3){
                m=2;
                break;
            }
        }
        else{
            count=0;
        }
    }
    cout<<m<<endl;

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}