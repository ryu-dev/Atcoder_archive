#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,k;cin>>n>>k;
  for(long long int i=0;i<k;++i){
    if(n%200==0){
      n/=200;
    }else{
      n=n*1000+200;
    }
  }
  cout<<n<<endl;
}