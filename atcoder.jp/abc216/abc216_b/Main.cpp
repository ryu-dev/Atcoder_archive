#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string>s(1000),t(1000);
    for(int i=0;i<n;++i){
        cin>>s[i]>>t[i];
    }
    for(int j=0;j<n;++j){
        for(int k=j+1;k<n-j;++k){
            if(s[j]==s[k] && t[j]==t[k]){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}