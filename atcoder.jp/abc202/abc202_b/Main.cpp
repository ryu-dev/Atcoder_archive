#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  char t;
  for(int i=s.length()-1;i>=0;--i){
    if(s[i]=='0' || s[i]=='1' || s[i]=='8'){
      t=s[i];
    }else if(s[i]=='6'){
      t='9';
    }else if(s[i]=='9'){
      t='6';
    }
    cout<<t;
  }
}