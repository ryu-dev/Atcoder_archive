#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,ans;cin>>n;
  long long int sum=0;
  for(long long int i=0;;++i){
    sum+=i;
    if(sum>=n){
      ans=i;
      break;
    }
  }
  cout<<ans<<endl;
}