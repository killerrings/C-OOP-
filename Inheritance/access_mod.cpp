#include<iostream>

using namespace std;

class ABC{
    protected:
        int m_protMem;
        void protFunc(){
            cout<<"Access allowed"<<endl;
        }
    public:
        void setProtectMemb(int i){
            m_protMem=i;
        }
        void display(){
            cout<<"Protected memer: "<<m_protMem<<endl;
        }
};

class XYZ: public ABC{
    public:
        void useProtectMem(){
            protFunc();
        }
};


int main(){
    ABC a;
    a.setProtectMemb(10);
    a.display();

    XYZ x;
    x.setProtectMemb(5);
    x.display();

    x.useProtectMem();
    return 0;
}
