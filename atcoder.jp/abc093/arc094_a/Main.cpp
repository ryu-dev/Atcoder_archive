#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>num(3);
  int sum=0;
  for(int i=0;i<3;++i){
    cin>>num[i];
    sum+=num[i];
  }
  sort(num.begin(), num.end());
  int goal=num[2]*3;
  if((sum%2==0 && goal%2==0) || (sum%2!=0 && goal%2!=0)){
    cout<<(goal-sum)/2<<endl;
  }else{
    goal+=3;
    cout<<(goal-sum)/2<<endl;
  }
}