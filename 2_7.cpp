#include <bits/stdc++.h>
using namespace std;
// int sum(int n){
//     int x=0;
//     for(int i=1;i<=n;i++){
//         x=x+i;
//     }
//     return x;
// }
// int sum2(int x){
//     int sum=0;
//     if(x==0){
//         return 0;
//     }
//     else{
//         sum=x+sum2(x-1);
//         return sum;
//     }
// }


int stair(int x){
    if(x==1) return 1;
    if(x==2) return 1k;

    else return stair(x-1)+stair(x-2);

    
    }
int main(){
    // int x=10;
    // cout<<sum2(x);
    // return 0;

int n=7;
int x=stair(n);
cout<<x;
}