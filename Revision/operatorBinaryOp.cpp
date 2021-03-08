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
        int operator == (Complex c){
            if(real==c.real && img==c.img){
                return 1;
            }
            else{
                return 0;
            }
        };
        
};

int main(){
    Complex c1(4,6), c2(4,6);
    
    if(c1==c2){
        cout<<"Object members having same values";
    }
    else
        cout<<"Object members have different values";

}