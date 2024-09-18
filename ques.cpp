#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a odd number:";
    cin>>n;
   if(n%2!=0){
    int x=3+(n-1)/2;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=n+1;j++){
            if(i+j==x || i+j==x+(i-1)*2){
                cout<<"2";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
            if(i==1){
                cout<<"*";
            }
            else if(i>1 && (j==1 || j==n+2)){
                cout<<"1";
            }
            else if(i==n && (j>1 && j<n+2)){
                cout<<"3";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
   }
   else{
    cout<<"invalid input";
   }
    return 0;
   
}