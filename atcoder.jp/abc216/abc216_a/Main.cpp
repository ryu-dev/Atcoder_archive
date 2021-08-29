#include<bits/stdc++.h>
using namespace std;
int main(){
  double x;cin>>x;
  int a=x*10;
  int b=a%10;
  if(0<=b && b<=2){
    cout<<floor(x)<<'-'<<endl;
  }else if(3<=b && b<=6){
    cout<<floor(x)<<endl;
  }else{
    cout<<floor(x)<<'+'<<endl;
  }
}