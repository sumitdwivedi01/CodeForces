// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve(){

//     int n;
//     cin>>n;
//     vector<int>a(n);
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(a[i]!=a[0]){
//             cnt++;
//         }
//     }
//     if(cnt==0){
//         cout<<"NO"<<endl;
//         return;
//     }else{
//         cout<<"YES"<<endl;
//         sort(a.begin(),a.end(),greater<int>());
//         swap(a[1],a[n-1]);
//         for(auto it:a){
//             cout<<it<<' ';
//         }
//         cout<<endl;
//     }
// }

// int main(){
    
//     int t =1;

//     cin>>t;


//     while(t--){

//         solve();
//     }


//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
static bool comp(pair<char,int>& p1, pair<char,int>& p2){
    return p2.second<p1.second;
}
void solve(){

        string s="AAABBBcccbert";
        string l;
        for(auto c: s){
            l.push_back(tolower(c));
        }
        cout<<l<<endl;
        map<char,int> mpp;
        for(auto c:l){
            mpp[c]++;
        }
        // for(auto [a,b]:mpp){
        //     cout<<a<<" "<<b<<endl;
        // }
        vector<pair<char,int>> v;
    for(auto [a,b]:mpp){
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),comp);
    for(auto [a,b]:v){
        cout<<a<<" "<<b<<endl;
    }



}

int main(){
    
    int t =1;

    // cin>>t;


    while(t--){

        solve();
    }


    return 0;
}