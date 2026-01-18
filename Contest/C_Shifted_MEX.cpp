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
    sort(a.begin(),a.end());
    if(n==1){
        cout<<1<<endl;
        return;//return is must
    }
    // int c_min = INT_MAX;//current minimum
    // for(int i=0;i<n;i++){
    //     bool check=false;
    //     for( auto it: a){
    //         if(it==i)check=true;
    //     }
    //     if(!check){
    //         c_min=i;
    //         break;
    //     }
    // }
    int cnt=0;//counting max number which have difference of 1 contunueously
    int tcnt=0;
    for(int i=n-1;i>0;i--){
        if(a[i]-a[i-1]==1 || a[i]-a[i-1]==0){
            if(a[i]-a[i-1]==1){
                tcnt++;
            }
        }else{
            tcnt=0;
        }
        cnt=max(tcnt,cnt);
    }
    cout<<cnt+1<<endl;







}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}