#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,k;cin>>n>>k;
  ll tmp=(n/k);
  if(n%k!=0){
    tmp+=1;
  }
  ll ans=n;
  ans=min(ans,abs(n-(k*tmp)));
  cout<<ans<<endl; 
}