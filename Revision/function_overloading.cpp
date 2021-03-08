#include<iostream>

using namespace std;

class Complex{
    int real, imag;
    public:
        Complex(){
            real=imag-0;
        }

        Complex(int x, int y){
            real=x;
            imag=y;
        }

        void disp(){
            cout<<"Real: "<<real;
            cout<<"\t Imag: "<<imag<<endl;
        }

        Complex add(Complex c){
            Complex tmp;
            tmp.real = real+c.real;
            tmp.imag=imag+c.imag;

            return tmp;
        }
};

int main(){
    Complex c1(5,7), c2(8,4);
    Complex c3;
    c3 = c1.add(c2);

    c1.disp();
    c2.disp();
    c3.disp();

}