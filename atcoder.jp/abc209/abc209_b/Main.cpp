#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;cin>>n>>x;
  int a,cnt;cnt=0;
  for(int i=1;i<=n;++i){
    cin>>a;
    if(i%2==0){
      cnt=cnt+a-1;
    }else{
      cnt+=a;
    }
  }
  if(cnt>x){
    cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
  }
}