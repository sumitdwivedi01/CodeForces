#include <bits/stdc++.h>
using namespace std;
 
void solve(){

        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        int sum =0;
        for(int i=0;i<n-1;i++){
            sum+=abs(a[i]-a[i+1]);
        }
        int red=INT_MIN;
        for(int i=0;i<n;i++){
            if(i==0){
                int temp=abs(a[i]-a[i+1]);
                red=max(red,temp);
            }
            else if(i>0 && i<n-1){
                int temp=((abs(a[i]-a[i-1])+abs(a[i]-a[i+1]))-abs(a[i-1]-a[i+1]));
                red=max(red,temp);
            }
            else{
                int temp=abs(a[i]-a[i-1]);
                red=max(red,temp);
            }
            
        }
        int ans  = sum-red;
        cout<<ans<<endl;

}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}