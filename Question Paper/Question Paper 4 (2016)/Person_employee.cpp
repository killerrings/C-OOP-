#include<iostream>
using namespace std;

class person{
    public:
        int age;
        char name[20];
        virtual void getData(){
            
        }
        virtual void showData(){
            
        }
};

class employee:public person{
    public:
        char e_id[20];
        int pay;
        void getData(){
            cout<<"Enter name and age: ";
            cin>>name>>age;
            cout<<"Enter pay and email: ";
            cin>>pay>>e_id;
        }
        void showData(){
            cout<<"Employee details: "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl; 
            cout<<"Pay: "<<pay<<endl;
            cout<<"Email: "<<e_id<<endl;
        }
};

int main(){
    employee e1;
    e1.getData();
    e1.showData();
    return 0;
}