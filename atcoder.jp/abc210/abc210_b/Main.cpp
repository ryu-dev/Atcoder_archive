#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string s;cin>>s;
  int cnt=0;
  for(int i=1;i<n+1;++i){
    if(s[i-1]=='1'){
      cnt=i;
      break;
    }
  }
  if(cnt%2==0){
    cout<<"Aoki"<<endl;
  }else{
    cout<<"Takahashi"<<endl;
  }
}