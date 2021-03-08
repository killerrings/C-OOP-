#include<iostream>
using namespace std;

class Test{
    public:
        static int a;
        void get(){
            cout<<"a= "<<a<<endl;
        }
};

int Test :: a=10;

int main(){
    Test::a=100;
    cout<<"a= "<<Test::a<<endl;

    Test t1;
    t1.get();
    return 0;
}