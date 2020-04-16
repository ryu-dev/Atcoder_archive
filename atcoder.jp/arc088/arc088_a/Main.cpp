#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll x,y;cin>>x>>y;
  ll ans=0;
  ll tmp=x;
  while(tmp<=y){
    tmp*=2;
    ++ans;
  }
  cout<<ans<<endl;
}