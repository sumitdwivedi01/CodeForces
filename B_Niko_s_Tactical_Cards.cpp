#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long x=0;//stores the maximum of current possible value
    long long y=0;//stores the minimum of current possible value
    
    for(int i=0;i<n;i++){
        // x= max({x-a[i],b[i]-x,y-a[i],b[i]-y});
        // y= min({x-a[i],b[i]-x,y-a[i],b[i]-y});
        vector<long long> values= {x-a[i],b[i]-x,y-a[i],b[i]-y};//checks the all combinations with the previous min and max value
        x=*max_element(values.begin(),values.end());
        y=*min_element(values.begin(),values.end());
    }
    cout<<x<<endl;
    
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}