#include<iostream>
using namespace std;

class Vector{
    int i;
    int j;
    int k;
    public:
        Vector(){
            i=j=k=0;
        }
        Vector(int x, int y, int z){
            i=x;
            j=y;
            k=z;
        }
        Vector(const Vector &p1){
            i=p1.i;
            j=p1.j;
            k=p1.k;
        }
        void display(){
            cout<<"The value of i: "<<i<<endl;
            cout<<"The value of j: "<<j<<endl;
            cout<<"The value of k: "<<k<<endl;
        }
};

int main(){
    Vector obj1;
    Vector obj2(10,20,30);
    Vector obj3=obj2;

    obj1.display();
    obj2.display();
    obj3.display();
}