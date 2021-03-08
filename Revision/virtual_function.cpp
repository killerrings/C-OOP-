#include<iostream>

using namespace std;

class Base{
    public:
        virtual void show(){
            cout<<"Base"<<endl;
        }
};
class Derived1:public Base{
    public:
        void show(){
            cout<<"Derived 1"<<endl;
        }
};
class Derived2:public Base{
    public:
        void show(){
            cout<<"Derived 2"<<endl;
        }
};

int main(){
    Derived1 d1;
    Derived2 d2;
    Base *bptr;

    bptr=&d1;
    bptr->show();

    bptr=&d2;
    bptr->show();

    return 0;
}