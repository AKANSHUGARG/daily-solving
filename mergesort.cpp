#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector<int> temp(end-start+1);
    int left=start, right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            left++;
        }

        else{
            temp[index]=arr[right];
            right++;
        }
        index++;
    }

    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }

    while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
    }

    index=0;

    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
}


void mergesort(int arr[],int start,int end){

    if(start==end){
        return;
    }

    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);

}

int main(){
    int n=10;

    int arr[10]={5,6,8,6,3,4,5,6,7,8};
    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
