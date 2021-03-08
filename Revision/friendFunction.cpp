#include<iostream>

using namespace std;

class B;
class A{
    int num1;
    public:
        A(int a){
            num1=a;
        }
        friend void add(A, B);
};

class B{
    int num2;

    public:
        B(int b){
            num2=b;
        }
        friend void add(A, B);
};

void add(A objA, B objB){
    cout<<objA.num1+objB.num2;
}

int main(){
    A obj1(10);
    B obj2(20);
    add(obj1, obj2);                                                                                                                                                                                                                                                          
    return 0;
}