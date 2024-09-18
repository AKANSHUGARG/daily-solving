#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=="."){
            x=(x*10)+0;
        }
        else if(s[i]=="-"){
            if(s[i+1]=="."){
                x=(x*10)+1;
            }
            else if(s[i+1]=="-"){
                x=(x*10)+2;
            }

            if(i+1==s.length()){
                
            }
        }

    }

    cout<<x;

    return 0;
}