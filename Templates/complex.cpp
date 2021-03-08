#include<iostream>
using namespace std;
class complex{
    int real, imag;
    public:
        complex(){
            real=imag=0;
        }
        complex(int x, int y){
            real=x;
            imag=y;
        }
        void display(){
            cout<<"Real part: "<<real<<"\tImaginary part: "<<imag<<endl;
        }
        friend complex operator+(complex c1, complex c2){
            complex tmp;
            tmp.real=c1.real+c2.real;
            tmp.imag=c1.imag+c2.imag;
            return tmp;
        }
    
        complex operator*(complex c){
            complex tmp;
            tmp.real= (real*c.real)-(imag*c.imag);
            tmp.imag=(real*c.imag)+(imag*c.real);
            return tmp;
        }
};


int main(){
    complex c1(3,4), c2(4,5), c3;
    c3=operator+(c1, c2);
    c3.display();

    c3=c1*c2;
    c3.display();
    return 0;
}