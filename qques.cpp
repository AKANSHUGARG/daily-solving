#include <bits/stdc++.h>
using namespace std;
int  main(){
    int n=32;
    int i=0;
    while(n<=1){
        if(n%2==0){
            i=i+1;
            n=n/2;
        }
        else{
            cout<<"no";
            return 0;
        }
    }
    if(i%2==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}