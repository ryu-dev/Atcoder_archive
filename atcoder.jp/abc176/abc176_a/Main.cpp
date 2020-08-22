#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x,t;
  cin>>n>>x>>t;
  int ans=0;int cnt=x;
  for(int i=1;;++i){
    if(cnt>=n){
      ans=i*t;
      break;
    }
    cnt+=x;
  }
  cout<<ans<<endl;
}