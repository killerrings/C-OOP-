#include<iostream>

using namespace std;

class Shape{
    public:
        double base;
        double height;
        Shape(){
            base=height=0;
        }
        void readData(){
            cout<<"Enter data (base and height)"<<endl;
            cin>>base>>height;
        }
        virtual void showArea(){

        }
};
class Tri:public Shape{
    public:
        void showArea(){
            double area=0.5*base*height;
            cout<<"The area of triangle is: "<<area<<endl;
        }
};
class Rect:public Shape{
    public:
        void showArea(){
            double area=base*height;
            cout<<"The area of rectangle is: "<<area<<endl;
        }
};

int main(){
    Shape *s;

    Tri t;
    t.readData();
    t.showArea();

    Rect r;
    r.readData();
    r.showArea();

    return 0;
}
