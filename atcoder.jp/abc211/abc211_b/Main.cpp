#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int ans=0;
  for(int i=0;i<4;++i){
    cin>>s;
    if(s=="H"){
      ans+=1;
    }else if(s=="2B"){
      ans+=2;
    }else if(s=="3B"){
      ans+=3;
    }else if(s=="HR"){
      ans+=4;
    }
  }
  if(ans==10){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}