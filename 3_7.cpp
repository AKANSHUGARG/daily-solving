#include <bits/stdc++.h>
using namespace std;
// int power(int n){
//    if(n==1) return 1;
//    if(n%2==1) return 0;
//    return power(n/2);
// }
int main(){
    int n=64;
    int i=4;
    while(i<=n){
        if(i!=n){
            i=i*4;

        }
        else{
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
    return 0;


    // while(n>1){
    //     if(n%2==0){
    //         n=n/2;
    //     }
    //     else{
    //         cout<<"no";
    //         return 0;
    //     }
    // }
    // cout<<"yes";
    // return 0;


//    int x=power(n);
//     if(x==1){
//         cout<<"yes";

//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
}