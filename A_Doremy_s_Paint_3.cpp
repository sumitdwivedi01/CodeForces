#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[v[i]]++;
    }
    if(mpp.size()>=3){
        cout<<"No"<<endl;
    }
    else if(mpp.size()==1){
        cout<<"Yes"<<endl;
    }
    else{
        int f1=0;
        int f2=0;
        int i=0;
        for(auto it:mpp){
            if(i==0)f1=it.second;
            else f2=it.second;
            i++;
        }
        int check=abs(f1-f2);
        if(check<=1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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