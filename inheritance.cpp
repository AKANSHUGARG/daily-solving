// #include <bits/stdc++.h>
// using namespace std;
// class Parent{
//     public:
//         void show(){
//              cout<<"This is Parent class function"<<endl;
//         }
//     // int x;
//     // Parent(int a){
//         // x=a;
//         // cout<<"Parent Constructor called. x = "<<x<<endl;
//     // }
// };

// class Child: public Parent{
//     public:
//     void show(){
//         cout<<"This is child class function"<<endl;
//     }
//     //     int y;
//     //     Child(int a, int b): Parent(a){
//     //         y=b;
//     //         cout<<"Child Constructor called. y =" <<y<<endl;
//     // }

// };

// class Example {
//     public:
//         void show(int a){
//             cout<< "Integer: "<<a<<endl;
//         }

//         void show (double b){
//             cout<<"Double: "<<b<<endl;
//         }

//         void show(string s){
//             cout<<"String: "<<s<<endl;
//         }
// };

// int main(){
//     // Child obj(10,20);
//     Example o;
//     o.show(10);
//     o.show(5.5);
//     o.show("yoo");
//     Parent p;
//     p.show();
//     Child c;
//     c.show();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"This is generic animal sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    void sound() override{
        cout<<"The dog barks!"<<endl;
    }
};

class Cat: public Animal {
    public:
    void sound() override{
        cout<<"The cat meow!"<<endl;
    }
};

class A{
    public:
    void show(){
        cout<<"Class A";
    }
};

class B : public A{
    public:
    void show(){
        cout<<"Class B";
    }
};

int main(){
    Animal *animalptr;
    Dog dog;
    Cat cat;
    animalptr=&dog;
    animalptr->sound();
    animalptr=&cat;
    animalptr->sound();

    A *bptr;
    A aa;
    bptr=&aa;
    bptr->show();
    return 0;
}