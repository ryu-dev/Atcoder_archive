#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;cin>>n;
  vector<ll>a(n);
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  ll cnt=0;
  for(int i=0;i<n;++i){
    if(a[i]%2==0){
      ++cnt;
      a[i]/=2;
      --i;
    }
  }
  cout<<cnt<<endl;
}