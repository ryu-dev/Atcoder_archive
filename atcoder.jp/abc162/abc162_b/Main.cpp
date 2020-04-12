#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  ll ans=0;
  for(ll i=n;i>0;--i){
    if(i%15!=0 && i%5!=0 && i%3!=0){
      ans+=i;
    }
  }
  cout<<ans<<endl;
}