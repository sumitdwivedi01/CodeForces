#include <bits/stdc++.h>
using namespace std;
 
void solve(){

    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // bool positive=true;
    // bool negative=true;
    // for(int i=0;i<n;i++){
    //     if(a[i]>=0)continue;
    //     else{
    //         positive=false;
    //         break;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(a[i]<=0){
    //         continue;
    //     }else{
    //         negative=false;
    //         break;
    //     }
    // }
    long long x=0;
    // if(positive){
    //     for(int i=0;i<n-1;i++){
    //         x+=a[i];
    //     }
    //     cout<<x<<endl;
    //     return;
    // }
    // else if(negative){
    //     for(int i=1;i<n;i++){
    //         x+=abs(a[i]);
    //     }
    //     cout<<x<<endl;
    //     return;
    // }
    
    int k=0;
    int i=0;
    int j=1;
    while(k<n-1){
        // cout<<"k"<<k<<endl;
        // cout<<"i"<<i<<"j"<<j<<endl;
        if(a[i]>=0 && a[j]>=0){// +  +
            x+=a[i];
            i=j;
            j++;
        }
        else if(a[i]<0 && a[j]<0){// -  -
            x+=abs(a[j]);
            j++;
        }
        else if(a[i]>=0 && a[j]<0){// +  -
            if(j==(n-1)){//last pick option
                x+=max(a[i],abs(a[j]));
            }
            else{
                // if(a[j+1]>=0){
                //     x+=abs(a[j]);
                //     j++;
                // }
                 if(a[j+1]>a[j]){
                    x+=abs(a[j]);
                    j++;
                }
                else{
                    x+=a[i];
                    i=j;
                    j++;
                }
            }
        }
        else{//- +
            if(j==n-1){
                x-=min(abs(a[i]),a[j]);
            }
            else{
                // x+=a[i];
                // i=j;
                // j++;
                if((a[i]+a[j])>=(-a[j]-a[j+1])){
                    x+=a[i];
                    i=j;
                    j++;
                }
                else{
                    x-=a[j];
                    j++;
                }
            }
        }

        k++;
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