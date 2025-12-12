#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long> even;
    int max_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            max_odd=max(max_odd,arr[i]);
        }
        else{
            even.push_back(arr[i]);
        }
    }
    sort(even.begin(),even.end(),greater<int>());
    vector<long long> ans;
    ans.push_back(max_odd);
    if(max_odd==0){//if all are even so result will be 0 at each point
        for(int i=0;i<n;i++){
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    if(even.size()==0){//if only  odd is present 
        for(int i=0;i<n;i++){
            if(i%2==0)cout<<max_odd<<" ";//for even index max element will be ans other wise 0(two odd = even)
            else cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    long long sum=max_odd;
    for(int i=0;i<even.size();i++){//push all the even after odd to caldulate result
        sum+=even[i];
        ans.push_back(sum);
    }
    if(even.size()==n-2){
        ans.push_back(0);//after taking all elements with 2 odd the result will become 0 at the last
    }
    else{//if odds are greater than equals to 3
        bool flag=1;
        for(int i=ans.size() ;i<n;i++){
            if(flag){
                ans.push_back(ans.back()-even.back());
            }
            else{
                ans.push_back(ans.back()+even.back());
            }
            flag=!flag;
        }
        if((n-even.size())%2==0)ans[n-1]=0;
    }
    for(auto it:ans){
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