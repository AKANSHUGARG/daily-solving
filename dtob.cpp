#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    cin>>n;
    int x=0;
    while(n!=0){
       int y=n&1;
        ans=(y*pow(10,x))+ans;
        n=n>>1;
        x=x+1;
    }

    cout<<ans;
    return 0;

}