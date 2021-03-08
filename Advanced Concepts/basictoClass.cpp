#include<iostream>

using namespace std;

class sample{
    int x;
    public:
        sample(){

        }
        sample(int x){
            this->x=x;
        }
        void disp(){
            cout<<"The value of x is: "<<x<<endl;
        }
};

int main(){
    int m=10;
    sample s;
    s=m;
    s.disp();
    return 0;
}