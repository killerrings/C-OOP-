#include<iostream>

using namespace std;

class Base{
    public:
        void display(){
            cout<<"Base()"<<endl;
        }
};
class Derived{
    public:
        void display(){
            cout<<"Derived()"<<endl;
        }
};

int main(){
    Base b;
    Derived d;
    Base *bptr;
    // bptr=&d;
    // (Derived *)(bptr)->display();
    return 0;
}