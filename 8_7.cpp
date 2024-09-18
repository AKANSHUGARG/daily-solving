#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int sum=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        
    }
    cout<<sum;
    return 0;
    for(int i=1;i<=n;i++){
        sum=sum+(n/i)*i;
    }
    cout<<sum;
    return 0;


    

}