#include<iostream>

using namespace std;

class space{
    int x, y, z;
    public:
        space(){
            x=y=z=0;
        }
        space(int x, int y, int z){
            this->x=x;
            this->y=y;
            this->z=z;
        }
        void display(){
            cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
        }
        void operator ++(){
            ++x;
            ++y;
            ++z;
        }
        void operator -(){
            x=-x;
            y=-y;
            z=-z;
        }
};

int main(){
    space s1(3,4,5);
    s1.display();

    ++s1;
    s1.display();

    -s1;
    s1.display();

}