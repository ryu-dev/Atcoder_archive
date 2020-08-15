#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int ans=0;
    int tmp=0;
    for(int i=0;i<3;++i){
        if(s[i]=='R'){
            ++ans;
        }else{
            ans=0;
        }
        tmp=max(ans,tmp);
    }
    cout<<tmp<<endl;
}