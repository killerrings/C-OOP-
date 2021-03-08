// Whenver we want to return more than one values at a time, we need to go for object type return values
#include<iostream>

using namespace std;

class Test{
    int a, b;
    public:
        void getData();
        void putData();
        Test getSum(Test object){
            Test t3;
            t3.a=a+object.a;
            t3.b=b+object.b;
            return t3;
        }
};

void Test::getData(){
    cout<<"Enter a, b values: "<<endl;
    cin>>a>>b;
} 
void Test::putData(){
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}

int main(){
    Test t1, t2, t3;

    t1.getData();
    t2.getData();

    t3=t1.getSum(t2);

    t1.putData();
    t2.putData();

    cout<<"The object data is: "<<endl;
    t3.putData();
    return 0;
}
