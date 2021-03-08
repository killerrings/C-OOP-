#include<iostream>

using namespace std;

class demo{
    int i;
    public:
        demo(int x){
            i=x;
        }
        int getData(){
            return i;
        }
};

int main(){
    demo obj(40);
    demo *ptr=&obj;
    cout<<"i: "<<ptr->getData()<<endl;
    return 0;
}