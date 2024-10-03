#include <bits/stdc++.h>
using namespace std;

int checkstr(string str, int start, int end){
    if(start>end){
        return 1;
    }

    else if(str[start]!=str[end]){
        return 0;
    }

    return checkstr(str,start+1,end-1);
}

int count(string str, int index){

    if(index==-1){
        return 0;
    }


    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u'){
        return 1+count(str,index-1);
    }

    else{
        return count(str,index-1);
    }
}

void reverse(string str,int start, int end){
    if(start>=end){
        cout<<str;
        return;
    }

    swap(str[start],str[end]);
    reverse(str,start+1,end-1);
}

void ltou(string &str, int index){

    if(index==-1){
        return;
    }

    str[index]=str[index]-32;
    ltou(str,index-1);

}

int main(){
    string str="namaan";
    int index=str.size()-1;
    // int index=str.size()-1;
    // int start=0;
    // int end=str.size()-1;

    // int y=checkstr(str,start,end);
    // cout<<y;
    // return 0;

    // cout<<count(str,index);

    // reverse(str,start,end);

    ltou(str,index);
    cout<<str;
    return 0;

}