#include<iostream>

using namespace std;

class Liquid{
    public:
        void display1(){
            cout<<"Liquid class"<<endl;
        }
};
class Fuel{
    public:
        void display2(){
            cout<<"Fuel class"<<endl;
        }
};

class Petrol : public Liquid, public Fuel{
    public:
        void display3(){
            cout<<"Petrol class"<<endl;
        }
};

int main(){
    Liquid l;
    Fuel f;
    Petrol p;

    cout<<"Petrol is from: "<<endl;
    p.display1();
    p.display2();
    p.display3();
    return 0;
}