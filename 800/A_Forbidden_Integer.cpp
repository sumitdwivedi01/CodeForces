#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int x;
    cin>>x;
    if(x==1 && k==1){
        cout<<"NO"<<endl;
        return;
    }
    if(x!=1 && k>=1){
        vector<int> ans(n,1);
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(auto it: ans)cout<<it<<" ";
        cout<<endl;
        return;
    }
    if(x==1 && k>=2){
        if(n==1){
            cout<<"NO"<<endl;
            return;
        }
        if(n%2==0){
            vector<int> ans;
            int sum=0;
            while(sum!=n){
                ans.push_back(2);
                sum+=2;
            }
            cout<<"YES"<<endl;
            cout<<ans.size()<<endl;
            for(auto it:ans)cout<<it<<" ";
            cout<<endl;
            return;
        }
        else{
            if(k>=3){
                int sum=3;
                vector<int>ans(1,3);
                while(sum!=n){
                    sum+=2;
                    ans.push_back(2);
                }
                cout<<"YES"<<endl;
                cout<<ans.size()<<endl;
                for(auto it: ans)cout<<it<<" ";
                cout<<endl;
                return;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }






}

int main(){
    
    int t =1;

    cin>>t;


    while(t--){

        solve();
    }


    return 0;
}