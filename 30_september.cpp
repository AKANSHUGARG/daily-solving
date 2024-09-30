#include <bit/stdc++.h>
using namespace std;
class Animal {
    public:
    void eat() {
        cout <<"Eating...\n";
    }
};
class Dog : public Animal {
    public:
    void bark(){
        cout <<"Barking...\n";
    }
};
class Puppy: public Dog{
    public:
    void sleep(){
        cout<<"sleeping.....\n";
    }
};
class Vehicle {
    public:
    void start(){
        cout << "Vehicle Starting...\n";
    }
};
class Car : virtual public Vehicle {
    public:
    void drive() {
        cout << "Car Driving...\n";
    }
};
class Truck : virtual public Vehicle {
    public:
    void loadCargo() {
        cout << "Loading Cargo...\n";
    }
};
class Hybrid : public Car, public Truck {
    public:
    void hybridDrive() {
        cout << "Hybrid Driving...\n";
    }
};
int main(){
    Dog myDog;
    myDog.eat();
    myDog.bark();

    Puppy myPuppy;
    myPuppy.eat();
    myPuppy.bark();
    myPuppy.sleep();

    Hybrid myHybrid;
    myHybrid.start();
    myHybrid.drive();
    myHybrid.loadCargo();
    myHybrid.hybridDrive();

    return 0;
}
