#include<iostream>

using namespace std;

class Complex{
    int real, imag;
    public:
        Complex(){
            real=imag=0;
        }
        Complex(int x, int y){
            real=x;
            imag=y;
        }
        void display(){
            cout<<"Real: "<<real;
            cout<<"\tImaginary: "<<imag<<endl;
        }
        friend Complex operator+(Complex x, Complex y){
            Complex temp;
            temp.real = x.real+y.real;
            temp.imag = x.imag+y.imag;
            return temp;
        }
};

int main(){
    Complex c1(3,6), c2(7,3);
    Complex c3;
    c3= operator+(c1, c2);
    c3.display();
    return 0;
}