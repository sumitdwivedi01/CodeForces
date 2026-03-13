#include <bits/stdc++.h>
using namespace std;
#define ll long long
static bool comp(pair<int,int> &p1 , pair<int,int>&p2){
    if(p1.first>p2.first){
        return true;
    }else if(p1.first==p2.first){
        return p1.second<p2.second;
    }else{
        return p1.first>p2.first;
    }
}
void solve(){

        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].first%=k;
            a[i].second=i+1;
        }
        vector<int>ans(n);
        int j=0;
        for(int i=0;i<n;i++){
            if(a[i].first==0){
                ans[j]=a[i].second;//set all initials
                j++;
                
            }
        }
        int i=0;
        sort(a.begin(),a.end(),comp);
        for(j;j<n;j++){
            ans[j]=a[i].second;
            i++;
        }
        for(auto q:ans){
            cout<<q<<" ";
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