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
        friend complex multiply(complex c1, complex c2){
            complex temp;
            temp.real=(c1.real*c2.real)-(c1.imag*c2.imag);
            temp.imag=(c1.real*c2.imag)+(c1.imag*c2.real);
            return temp;
        }
        void display(){
            cout<<"Real part: "<<real<<"\tImaginary part: "<<imag<<endl;
        }
};

int main(){
    complex c1(3,6), c2(5,8);
    complex c3;
    c3=multiply(c1, c2);

    c3.display();
    return 0;
}