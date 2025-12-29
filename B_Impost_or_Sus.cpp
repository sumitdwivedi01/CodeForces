#include <bits/stdc++.h>
using namespace std;
 
void solve(){

   string r;
   cin>>r;
   int n=r.length();
//    cout<<n<<" n"<<endl;
   int uc=0;
   for(int i=0;i<n;i++){
    if(r[i]=='u')uc++;
   }
//    cout<<"uc "<<uc<<endl;
   if(uc==0){//if no u it's already suspecious
    cout<<0<<endl;
    return;
   }
   if(uc==n){//if all are the u
    int ans=(uc/2)+1;
    cout<<ans<<endl;
    return;
   }
   bool check=true;
   for(int i=0;i<n;i++){
        if(r[0]=='u'||r[n-1]=='u'){
            check=false;
            break;
        }
        if(r[i]=='u'&& r[i-1]=='s' && r[i+1]=='s'){
            continue;
        }
        else{
            check=false;
            break;
        }
   }
   int count=0;
   if(check){//already suspecious
    cout<<0<<endl;
    return;
   }
   else{
    if(r[0]=='u'){
        count++;
        r[0]='s';
    }
    if(r[n-1]=='u'){
        count++;
        r[n-1]='s';
    }
    for(int i=1;i<n-1;i++){
        if(r[i]=='u'){
            if(r[i-1]=='s' && r[i+1]=='s'){
                continue;
            }
            else{
                r[i+1]='s';
                count++;
            }
        }
    }
    cout<<count<<endl;
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