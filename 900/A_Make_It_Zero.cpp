#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n%2==0){//if n is even only two steps will make it 0 always 1 make all same from 1 to n-1 then xor all from 1 to n-1
    cout<<"2"<<endl;
    cout<<"1"<<" "<<n<<endl;    
    cout<<"1"<<" "<<n<<endl;    
    }
    else{
        cout<<"4"<<endl;//4 steps 
        cout<<"1"<<" "<<n<<endl;//make all same
        cout<<"1"<<" "<<n-1<<endl;//taking even length
        cout<<"2"<<" "<<n<<endl;//taking even length
        cout<<"2"<<" "<<n<<endl;

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