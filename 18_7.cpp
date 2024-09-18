#include <bits/stdc++.h>
using namespace std;
int main(){
    int pairs;
    int zeroes=0;
    int arr[9]={2,3,5,0,-1,8,0,4,6};
    for(int i=0;i<9;i++){
        if(arr[i]==0){
            zeroes=zeroes+1;
        }
    }

    if(zeroes==0){
        cout<<"no pair";
    }

    else{
        pairs=9-zeroes;
        cout<<pairs;
    }

    return 0;
}