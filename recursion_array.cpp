#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int index, int n){
    if(index==n){
        return;
    }
    print(arr,index+1,n);
    cout<<arr[index]<<endl;
}

int sum1(int arr[], int index, int n){
    if(index==n){
        return 0;
    }

    return arr[index]+sum1(arr,index+1,n);
}


int main(){
    int arr[5]={3,7,6,2,8};
    int n=5;
    int index=0;

    // print(arr, index, n);
    // return 0;

    int y=sum1(arr,index,n);
    cout<<y;
    return 0;
}