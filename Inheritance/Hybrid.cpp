#include<iostream>

using namespace std;

class Car{
    public:
        void disp1(){
            cout<<"Car class"<<endl;
        }
};

class FuelCar : public Car{
    public:
        void disp2(){
            cout<<"Fuel car class"<<endl;
        }
};

class ElectricCar : public Car{
    public:
        void disp3(){
            cout<<"Electric car class"<<endl;
        }
};

class MixedCar : public FuelCar, public ElectricCar{
    public:
        void disp4(){
            cout<<"Mixed car class"<<endl;
        }
};

int main(){
    MixedCar m;
    cout<<"Hybrid car contains: "<<endl;
    m.disp2();
    m.disp3();
    m.disp4();
    return 0;
}