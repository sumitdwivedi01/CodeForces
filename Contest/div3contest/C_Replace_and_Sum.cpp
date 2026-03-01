#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>> qr(q);
    for(int i=0;i<q;i++){
        cin>>qr[i].first;
        cin>>qr[i].second;
    }
    for(int i=0;i<n;i++){
        if(b[i]>a[i]){
            a[i]=b[i];
        }
    } 
    int mx=a[n-1];
    for(int i=n-1;i>=0;i--){
        if(a[i]>mx){
            mx=a[i];
        }
        a[i]=mx;
    }
    vector<ll> presum(n+1);
    ll sum=0;
    presum[0]=0;
    for(int i=1;i<=n;i++){
        sum+=a[i-1];
        presum[i]=sum;

    }
     for(auto [k,r]:qr){
        int i=k-1;
        int j=r-1;
        ll ans=presum[j+1]-presum[i];
        cout<<ans<<" ";

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

// for(int x=i;x<=j;x++){
        //     if(x==n-1){//last element
        //         if(a[x]<b[x]){
        //             sum+=b[x];
        //         }else{
        //             sum+=a[x];
        //         }
        //         break;
        //     }
        //     if(a[x]>=a[x+1]){//no swap a[x] if bigger than a[x+1]
        //         if(a[x]<b[x]){
        //             sum+=b[x];
        //         }else{
        //             sum+=a[x];
        //         }
        //     }else{
        //         swap(a[x],a[x+1]);//swap
        //         if(a[x]<b[x]){
        //             sum+=b[x];
        //         }else{
        //             sum+=a[x];
        //         }
        //     }
        // }
        // ans.push_back(sum);