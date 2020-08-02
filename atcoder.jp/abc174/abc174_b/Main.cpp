#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;cin>>n>>d;
    int ans=0;
    double x,y;
    double a;
    for(int i=0;i<n;++i){
        cin>>x>>y;
        x*=x;
        y*=y;
        a=x+y;
        a=sqrt(a);
        if(a<=d){
            ans++;
        }
    }
    cout<<ans<<endl;
}