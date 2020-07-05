#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;;++i){
        if(1000*i>=n){
            cout<<1000*i-n<<endl;
            return 0;
        }
    }
}