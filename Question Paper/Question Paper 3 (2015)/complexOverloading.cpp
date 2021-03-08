#include<iostream>

using namespace std;

class complex{
    int real;
    int imag;
    public:
        complex(){
            real=imag=0;
        }
        complex(int x, int y){
            real=x;
            imag=y;
        }
        complex operator+(complex obj){
            complex temp;
            temp.real=real+obj.real;
            temp.imag=imag+obj.imag;
            return temp;
        }
        complex operator*(complex obj){
            complex temp;
            temp.real=(real*obj.real)-(imag*obj.imag);
            temp.imag=(real*obj.imag)+(imag*obj.real);
            return temp;
        }
        void operator++(){
            ++real;
            ++imag;
        }
        void display(){
            cout<<"Real: "<<real<<"\tImaginary: "<<imag<<endl;
        }
};
int main(){
    complex c1(3,4), c2(6,9);
    complex c3;

    c3=c1+c2;
    c3.display();

    c3=c1*c2;
    c3.display();

    ++c1;
    c1.display();
}