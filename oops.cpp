#include <bits/stdc++.h>
using namespace std;
class A{
    string name;
    friend class B;
};

class B{
    public:
    void set(A & obj1, string S){
        obj1.name=S;
    }
    void printdata(A & obj1){
        cout<<obj1.name;
    }
};
int main(){
    A obj1;
    B obj2;
    obj2.set(obj1, "akanshu");
    obj2.printdata(obj1);
    return 0;
}