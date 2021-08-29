#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int a,b,c,right,left;cin>>a>>b>>c;
  left=(a*a)+(b*b);
  right=c*c;
  if(left<right){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}