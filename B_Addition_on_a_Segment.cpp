#include <bits/stdc++.h>
using namespace std;
 
// void solve(){
//     int n;
//     cin>>n;
//     int b[n];
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }
//     int a[n];
//     int zero_count=0;
//     int b_min=INT_MAX;
//     for (int i=0; i<n; i++) {
//         a[i] = 0;
//         if(b[i]==0)zero_count++;
//         b_min=min(b[i],b_min);
//     }
//     int r_max=n-zero_count;
//     int l_min=b_min;

//     int max_val = r_max-l_min+1;
//     cout<<max_val<<endl;
// }
void solve(){
    int n;
    cin>>n;
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int a[n];
    int zero_count=0;
    for (int i=0; i<n; i++) {
        a[i] = 0;
        if(b[i]==0)zero_count++;
    }
    sort(b.begin(),b.end());
    int max_elem=b.back();
    int min_elem=b[zero_count];
    int toal_elem=n-zero_count;
    int num_diff=max_elem-min_elem;
    if(num_diff==0){
        cout<<1<<endl;
        return;
    }
    int max_res=

    
}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}