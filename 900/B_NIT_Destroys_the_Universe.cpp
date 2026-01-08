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
    int c0=0;
    bool all_zero=true;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            all_zero=false;
            break;
        }
    }
    if(all_zero){
        cout<<"0"<<endl;
        return;
    }
    else{
        int brk=0;
        if(a[0]!=0){
            brk++;
        }
        int c0=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==0){
                c0++;
                if(a[i+1]!=0){
                    brk++;
                }
            }
        }
        if(brk==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
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