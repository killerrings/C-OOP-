#include<iostream>

using namespace std;

class Animal{
    int legs;
    public:
        Animal(){
            legs=4;
        }
        void display1(){
            cout<<"Legs= "<<legs<<endl;
        }
};

class Dog : public Animal{
    bool tail;
    public:
        Dog(){
            tail=true;
        }
        void display2(){
            cout<<"Tail: "<<tail<<endl;
        }
};

int main(){
    Dog d1;
    d1.display1();
    d1.display2();
    return 0;
}