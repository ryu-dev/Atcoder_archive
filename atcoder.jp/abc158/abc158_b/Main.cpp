#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,a,b;cin>>n>>a>>b;
    cout<<a*(n/(a+b))+min(a,n%(a+b))<<endl;
}