#include <bits/stdc++.h>
using namespace std;
class example{
    int x;
    
    public:
        example(int x){
            this->x=x;
        }
        
        void display(){
            cout<<"value of x:"<<x<<endl;
        }
};
int main(){
    example e1(4);
    
    e1.display();
    return 0;
}