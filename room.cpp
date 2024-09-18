#include <bits/stdc++.h>
using namespace std;
int main(){
    int customers;
    cout<<"Enter number of customers:";
    cin>>customers;

    int arr[customers][2];
    for(int i=0;i<customers;i++){
        for(int j=0;j<2;j++){
            if(j==0) cout<<"Enter arrival time of customer:";
            else cout<<"Enter waiting time of food prepration:";
            cin>>arr[i][j];
        }
    }

    int uni_time=arr[0][0];
    int wt[customers];

    for(int i=0;i<customers;i++){
       if(uni_time<arr[i][0]) uni_time=arr[i][0];

       uni_time=uni_time+arr[i][1];
       wt[i]=uni_time-arr[i][0];   
    }

    float sum=0;

    for(int i=0;i<customers;i++){
        sum=sum+wt[i];
    }

    float ans=sum/customers;

    cout<<ans;
    return 0;

}