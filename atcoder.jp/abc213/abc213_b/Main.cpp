#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<long long int>a(n);
  vector<long long int>b(n);
  for(int i=0;i<n;++i){
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b.begin(),b.end());
  for(int j=0;j<n;++j){
    if(b[n-2]==a[j]){
      cout<<j+1<<endl;
      return 0;
    }
  }
}