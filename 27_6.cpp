// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=121;
//     int b=sqrt(n);
//     if(b*b!=n){
//         cout<<"not having 3 factors";
//         return 0;
//     }
//     else{
//         int c=sqrt(b);
//         for(int i=2;i<c;i++){
//             if(c%i==0){
//                 cout<<"not having 3 factors";
//                 return 0;
//         }
//     }    
//         cout<<"having 3 factors";    
//         return 0;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    // int n=5;
    // int p=1;
    // for(int i=1;i<=n;i++){
    //     p=p*i;    
    // }
    // cout<<(p);
    // return 0;

    // int x=tgamma(6);
    // cout<<(x);
    // return 0;

//     int count=99;
//     for(int i=2;i<=100;i++){
//         for(int j=2;j<=sqrt(i);j++){
//             if(i%j==0){
//                 count=count-1;
//                 break;
//             }
//         }
//     }
//     cout<<count;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=20;
//     int flag=0;
//     for(int i=2;i<=100;i++){
//         for(int j=2;j<=sqrt(100);j++){
//             if(i==j){
//                 cout<<i;
//                 flag=0;
//                 break;
//             }
//             else{
//                 if(i%j!=0){
//                     flag=1;
//                 }
//                 else{
//                     flag=0;
//                     break;
//             }
//             }
//         }
//          if(flag==1){
//                 cout<<i ;

//     }

// }
// }




#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //        if(j<=n-i){
    //         cout<<" ";
    //        }
    //        else{
    //         cout<<"*";

    //        }
    //     }
    //     cout<<"\n";
        
    // }
    






    // return 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i || j==n-i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}