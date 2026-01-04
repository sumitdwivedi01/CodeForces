#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int a,b;
    cin>>a>>b;
    int xk,yk;
    cin>>xk>>yk;
    int xq,yq;
    cin>>xq>>yq;
    set<pair<int,int> > s1;
    set<pair<int,int> > s2;
    int count=0;
    vector<pair<int,int>> v={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
    for(int i=0;i<v.size();i++){
        s1.insert({xk+v[i].first,yk+v[i].second});
        s2.insert({xq+v[i].first,yq+v[i].second});
    }
    for(auto it : s1){
        if(s2.find(it)!=s2.end()){
            count++;
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