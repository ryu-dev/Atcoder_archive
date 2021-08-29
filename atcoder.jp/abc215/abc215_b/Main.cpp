#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n;cin>>n;
  long long int tmp=1;
  long long int cnt=0;  
  for(cnt=0;;++cnt){
    tmp*=2;
    if(tmp>n){
      break;
    }
  }
  cout<<cnt<<endl;
}