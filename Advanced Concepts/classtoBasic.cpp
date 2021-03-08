#include<iostream>
using namespace std;

class sample{
    float a;
    public:
        sample(){
            a=10.23;
        }

        operator int(){
            int x;
            x=a;
            return x;
        }
};

int main(){
    sample S;
    int y = S;

    cout<<"Val of y: "<<y;
    return 0;
}