#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0){
        cout<<"Happy Birthday"<<endl;
        return;
    }

    cout<<n<<" days to your birthday"<<endl;
    fun(n-1);
}

void count(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    count(n-1);
}

void evens(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    evens(n-2);
}

void printupto(int start, int end){
    if(start==end){
        cout<<start<<endl;
        return;
    }

    cout<<start<<endl;
    printupto(start+1,end);
}

void printing(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }

    printing(n-1);
    cout<<n<<endl;
}

void printingeven(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }

    printingeven(n-2);
    cout<<n<<endl;
}


int fact(int n){
    if(n==1){
        return n;
    }
    return n*fact(n-1);
}

int sumof(int n){
    if(n==1){
        return n;
    }

    return n+sumof(n-1);
}

int powerof(int x,int n){
    if(n==0){
        return 1;
    }

    return x*powerof(x,n-1);
}


int sumsquare(int n){
    if(n==1){
        return 1;
    }

    return (n*n)+sumsquare(n-1);
}

void coderarmy(int n){
    if(n==0){
        return;
    }

    cout<<"coder army"<<endl;
    coderarmy(n-1);
}

void table(int n,int x){
    if(x==11){
        return;
    }

    cout<<n<<" *"<<x<<"="<<n*x<<endl;
    table(n,x+1);
}


int cube(int n){
    if(n==1){
        return 1;
    }

    return (n*n*n)+cube(n-1);
}






int main(){
    // int n;
    // cout<<"Enter no. of days left:";
    // cin>>n;
    // fun(n);

    // int x;
    // cout<<"no. to prints:";
    // cin>>x;

    // count(x);

    // int p;
    // cout<<"enter even no.:";
    // cin>>p;

    // evens(p);


    // int start,end;
    // cout<<"Enter start:";
    // cin>>start;
    // cout<<"Enter end:";
    // cin>>end;

    // printupto(start,end);

    // return 0;

    // int n;
    // cout<<"enter digit:";
    // cin>>n;

    // // printing(n);
    // printingeven(n);

    // return 0;

    // int n;
    // cout<<"digit:";
    // cin>>n;

    // int y = fact(n);
    // cout<< y;
    // return 0;


    // int y=sumof(n);
    // cout<<y;
    // return 0;

    // int x;
    // cout<<"power 0f:";
    // cin>>x;
    // int y=powerof(x,n);
    // cout<<y;
    // return 0;

    // int y=sumsquare(n);

    // cout<<y;
    // return 0;

    // coderarmy(10);

    int n;
    cout<<"Enter a number:";
    cin>>n;

    // table(n,1);
    // return 0;

    // int y=cube(n);
    // cout<<y;

    


}