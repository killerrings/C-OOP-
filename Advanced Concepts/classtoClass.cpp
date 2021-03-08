#include<iostream>

using namespace std;

class alpha{
    int commona;
    public:
        alpha(){}
        alpha(int x){
            commona=x;
        }
        int getVal(){
            return commona;
        }
};

class beta{
    int commonb;
    public:
        beta(){}
        beta(int x){
            commonb=x;
        }
        beta(alpha a){  //constructor method
            commonb=a.getVal();
            cout<<"Constructor method"<<endl;
        }
        operator alpha(){   
                        cout<<"Casting operator function method"<<endl;

            return alpha(commonb);
        }
};

int main(){
    alpha objA(10);
    beta objB=objA;

    objA=objB;
    return 0;
}