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
         void disp(){
            cout<<"Real value: "<<real;
            cout<<"\tImaginary value: "<<imag<<endl;

        }
        friend complex operator +(complex c1, complex c2){
            complex temp;
            temp.real=c1.real+c2.real;
            temp.imag=c1.imag+c2.imag;
            return temp;
        }
        complex operator -(complex c){
            complex temp;
            temp.real = real-c.real;
            temp.imag=imag-c.imag;
            return temp;
        }
};

int main(){
    complex c1(4,5), c2(5,6);
    complex c3;
    c3=operator+(c1,c2);
    c3.disp();

    c3=c1-c2;
    c3.disp();
    return 0;
}