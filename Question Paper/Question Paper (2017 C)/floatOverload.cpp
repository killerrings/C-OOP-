#include<iostream>
using namespace std;

class FLOAT{
    float i;
    public:
        FLOAT(float k){
            i=k;
        }
        void operator+(float f){
            cout<<i+f<<endl;
        }
        void operator-(float f){
            cout<<i-f<<endl;
        }
        void operator*(float f){
            cout<<i*f<<endl;
        }
        void operator/(float f){
            cout<<i/f<<endl;
        }
};

int main(){
    FLOAT f(10.0);
    f+0.5;
    f-0.5;
    f*(0.5);
    f/0.5;

    return 0;
}
