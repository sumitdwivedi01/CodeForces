#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){cin>>b[i];}
    unordered_map<int,int> maxa;
    unordered_map<int,int> maxb;
    maxa[a[0]]=1;
    maxb[b[0]]=1;
    for(int i=1;i<n;i++){
        int cnt=1;
        while(i<n && a[i-1]==a[i]){
            cnt++;
            if(cnt>maxa[a[i]]){
                maxa[a[i]]=cnt;
            }
            i++;
        }
        if(i==n)break;
        maxa[a[i]]=max(maxa[a[i]],1);
    }
    for(int i=1;i<n;i++){
        int cnt=1;
        while(i<n && b[i-1]==b[i]){
            cnt++;
            if(cnt>maxb[b[i]]){
                maxb[b[i]]=cnt;
            }
            i++;
        }
        if(i==n)break;
        maxb[b[i]]=max(maxb[b[i]],1);
    }
    int maxlen=0;
    for(int i=0;i<n;i++){
        maxlen=max(maxlen,maxa[a[i]]+maxb[a[i]]);
        maxlen=max(maxlen,maxa[b[i]]+maxb[b[i]]);
    }
    cout<<maxlen<<endl;

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}