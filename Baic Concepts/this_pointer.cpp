//The this pointer is used to retrieve the address of the current object 
//The this pointer is also essential as it helps differentiate local variables from data members if they have the same name.

#include<iostream>

class Test{
    int a, b;

    public:
        // void show(){
        //     a=10;
        //     b=20;
        //     std::cout<<"Object address: "<<this<<std::endl;

        //     std::cout<<"a= "<<this->a<<std::endl;
        //     std::cout<<"b= "<<this->b<<std::endl;
        // }

        void show2(int a, int b){
            this->a=a; //(*this).a 
            this->b=b; 
        }

        void display(){
            std::cout<<a<<std::endl<<b;
        }
};


int main(){
    Test t;
    t.show2(10, 20);
    t.display();
    return 0;
}