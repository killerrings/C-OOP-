#include<iostream>

using namespace std;

class Sample{
    private: 
        int a, b;

        friend void print(Sample);
};

void print(Sample s){
    s.a=10;
    s.b=20;

    cout<<"a= "<<s.a<<endl;
    cout<<"b= "<<s.b<<endl;
}

int main(){
    Sample s1;
    print(s1);
    return 0;
}