#include<iostream>

using namespace std;

class Shape{    //abstract class
    public:
        virtual float calculateArea()=0;//Pure virtual function
};

class Square : public Shape{
    float l;
    public:
        Square(float l){
            this->l=l;
        }
        float calculateArea(){
            return l*l;
        }
};

class Circle:public Shape{
    float r;
    public:
        Circle(float r){
            this->r=r;
        }
        float calculateArea(){
            return 3.14*r*r;
        }
};

int main(){
    Square s(4);
    // float ar1=s.calculateArea();
    // cout<<"Area of square: "<<ar1<<endl;

    Circle c(2);
    // float ar2=c.calculateArea();
    // cout<<"Area of circle: "<<ar2<<endl;

    Shape *ptr;
    ptr=&s;
    cout<<"Area of square: "<<ptr->calculateArea()<<endl;

    ptr=&c;
    cout<<"Area of circle: "<<ptr->calculateArea()<<endl;


    return 0;
}