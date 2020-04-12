#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b){
  if(a<b){
    int tmp=b;
    b=a;
    a=tmp;
  }
  while(a%b!=0){
    int tmp=b;
    b=a%b;
    a=tmp;
  }
  return b;
}

int main(){
  int k;cin>>k;
  ll cnt=0;
  for(int a=1;a<=k;++a){
    for(int b=1;b<=k;++b){
      for(int c=1;c<=k;++c){
        cnt+=gcd(a ,gcd(b,c));
      }
    }
  }
  cout<<cnt<<endl;
}