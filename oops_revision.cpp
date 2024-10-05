#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int roll, account;
    string caste;

    public:
    // student(string name, int roll, int account, string caste){
    //     this->name=name;
    //     this->roll=roll;
    //     this->account=account;
    //     this->caste=caste;
    // }

    inline student(string n, int a, int ac,string c):name(n),account(ac),roll(a),caste(c){  
    }
};

int main(){

    student s1("akanshu",1,321,"garg");

    cout<<s1.name;

}
