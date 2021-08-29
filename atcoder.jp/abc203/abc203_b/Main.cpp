#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  int ans=0;
  for(int i=1;i<n+1;++i){
    for(int j=1;j<k+1;++j){
      ans+=(i*100)+j;
    }
  }
  cout<<ans<<endl;
}