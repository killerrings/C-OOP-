#include<iostream>

using namespace std;
  
class Complex{
    int real, img;

    public:
        Complex(){
            real=img=0;
        }

        Complex(int real, int img){
            this->real=real;
            this->img=img;
        }
        void disp(){
            cout<<"Real value: "<<real;
            cout<<"\tImaginary value: "<<img<<endl;

        }
        Complex operator + (Complex);

        
};

Complex Complex::operator + (Complex c){
    Complex temp;
    temp.real= real+c.real;
    temp.img= img+c.img;
    return temp;
}

int main(){
    Complex c1(4,6), c2(7,9);
    Complex c3;

    c3=c1+c2;

    c1.disp();
    c2.disp();
    c3.disp();

}