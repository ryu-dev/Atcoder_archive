#include<bits/stdc++.h>
using namespace std;
int main(){
    long int x;cin>>x;
    long int ans;
    ans=x/500*1000;
    x%=500;
    ans+=x/5*5;
    cout<<ans<<endl;
}