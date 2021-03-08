//Overload unary operator ++ using friend 
#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(){
            a=0;
        }
        A(int a){
            this->a=a;
        }
        void display(){
            cout<<"a= "<<a<<endl;
        }
        friend void operator ++(A &obj){
            obj.a=++obj.a;
        }
};

int main(){
    A a(6);
    operator ++(a);
    a.display();
    return 0;
}