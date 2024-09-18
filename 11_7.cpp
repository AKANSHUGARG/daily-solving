// #include <bits/stdc++.h>
// using namespace std;
// // int main() {
// // int n;
// // cout << "Enter n: ";
// // cin >> n;
// // int arr[n];
// // for (int i = 1; i <= n;i++) {
// //     cout << "Enter elements: ";
// //     cin >> arr[i];
// // }
// // int sum = 0;
// // int a,b;
// // cout << "Enter a and b: ";
// // cin >> a >> b;

// // for (int i = a;i <= b;i++) {
// //     sum += arr[i];
// // }

// // cout << "The sum is: " <<sum;
// // return 0;
// // }


// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int narr[n];
//     for(int i=0;i<n;i++){
//         if(i==0){
//             narr[i]=arr[0];
//         }
//         else{
//             narr[i]=narr[i-1]+arr[i];
//         }
//     }
//     int a,b;
//     cin>>a>>b;
//     int ans=narr[b]-narr[a];
//     cout<<ans;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    int lside=0;
    int rside=0;
    int flag=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    int mindex=arr[x];
    while(flag==0){
        for(int i=0;i<=x;i++){
            lside=lside+arr[i]-arr[x];
        }
        for(int i=x+1;i<n;i++){
            rside=rside+arr[i];
        }
        if(lside==rside){
            flag=1;
        }
        else{
            x=x+1;
        }
    }
    cout<<x;
    return 0;
    
}