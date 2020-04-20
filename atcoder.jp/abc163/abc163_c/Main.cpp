#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a;cin>>n;
  map<int, int>mp;
  for(int i=1;i<n;++i){
    cin>>a;
    ++mp[a];
  }
  for(int i=1;i<=n;++i){
    cout<<mp[i]<<endl;
  }
}