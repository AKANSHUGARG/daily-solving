#include<bits/stdc++.h>
using namespace std;
 class Car{
    private:
    string brand;
    string model;
    int year;
    public:
    Car(string brand,string model,int year){
    this ->brand=brand;
    this ->model=model;
    this ->year=year;
   }
   void CarDetails(){
    cout<<"brand: "<<brand<<endl<<"model: "<<model<<endl<<"year: "<<year<<endl;
   }
 };
int main(){
   
    Car c1("Toyota","Fortuner",2020);
    c1.CarDetails();

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     string Name,id;
//     int grade[5]={55,45,78,41,25};

//     public:
//     Student(string Name,string id){
//         this->Name = Name;
//         this->id = id;

//     }
    

//     float averagegrade(){
//         int total=0;
//         for(int i=0;i<5;i++){
//             total+=grade[i];
//         }
//         return total/5.0;
//     }

//     void printdetails(){
//         cout<<"Name : "<<Name<<endl<<"Id : "<<id<<endl<<"Average_gradde : "<<averagegrade();
//     }
  

// };
// int main(){

//     Student S1("Akanshu","185");
//     S1.printdetails();





// }