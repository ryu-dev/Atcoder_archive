#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;float m;cin>>n>>m;
  vector<int>a(n);
  int sum=0;
  for(int i=0;i<n;++i){
    cin>>a[i];
    sum+=a[i];
  }
  float tmp=sum/(4*m);
  int cnt=0;
  for(int i=0;i<n;++i){
    if(a[i]>=tmp){
      cnt++;
    }
  }
  if(cnt>=m){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}