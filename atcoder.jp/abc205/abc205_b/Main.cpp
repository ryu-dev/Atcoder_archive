#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  for(int j=1;j<n;++j){
    if(a[j-1]==a[j]){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
}