#include<iostream>

using namespace std;

class Test2;    //Forward declaration as friend fucntion needs it

class Test1{
    int a;
    friend void big(Test1, Test2);
    public:
        void geta(){
            cout<<"Enter value of a: "<<endl;
            cin>>a;
        }
    
};
class Test2{
    int b;
    friend void big(Test1, Test2);
    public:
        void getb(){
            cout<<"Enter value of b: "<<endl;
            cin>>b;
        }
};

void big(Test1 obj1, Test2 obj2){
    if(obj1.a>obj2.b)
        cout<<"a is big"<<endl;
    else if(obj1.a<obj2.b)
        cout<<"b is big"<<endl;
    else
        cout<<"Both are eqaul"<<endl;
};


int main(){
    Test1 t1;
    Test2 t2;

    t1.geta();
    t2.getb();

    big(t1, t2);

    return 0;
}



