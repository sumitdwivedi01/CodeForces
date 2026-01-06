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
    vector<int> b;
    vector<int> c;
    sort(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout<<"-1"<<endl;
        return ;
    }
    else{
        int i=n-2;
        c.push_back(a[n-1]);
        while(a[i]==a[i+1]){
            c.push_back(a[i]);
            i--;
        }
        while(i>=0){
            b.push_back(a[i]);
            i--;
        }
        cout<<b.size()<<' '<<c.size()<<endl;
        for(int it: b){
            cout<<it<<" ";
        }
        cout<<endl;
        for(int j=0;j<c.size();j++){
            cout<<c[j]<<' ';
        }
        cout<<endl;
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