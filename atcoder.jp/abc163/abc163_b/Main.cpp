#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,m;cin>>n>>m;
  vector<int>a(n);
  ll sum=0;
  for(ll i=0;i<n;++i){
    cin>>a[i];
    sum+=a[i];
  }
  if(n-sum>=0){
    cout<<n-sum<<endl;
  }else{
    cout<<"-1"<<endl;
  }
}