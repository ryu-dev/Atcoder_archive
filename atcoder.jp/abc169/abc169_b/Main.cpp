#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;cin>>n;
    vector<ll>a(n);
    ll ans=1;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]==0){
            cout<<0<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;++i){
        if(a[i]<=1000000000000000000/ans){
            ans*=a[i];
        }else{
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;
}