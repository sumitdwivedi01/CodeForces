#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    b=a;
    sort(b.begin(),b.end(),greater<int>());
    int i=0;
    while(i<n && b[i]==a[i] ){
        i++;
    }
    if(i==n){
        for(auto it: a){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    int e=i;
    for(int j=i+1;j<n;j++){
        if(a[j]==b[i]){
            e=j;
            break;
        }
    }

    reverse(a.begin()+i,a.begin()+e+1);
    for(auto it: a){
        cout<<it<<" ";
    }
    cout<<endl;





}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}