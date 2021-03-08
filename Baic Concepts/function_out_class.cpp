#include<iostream>
#include<string>

using namespace std;

class employee{
    private:
        char name[20];
        int age;

    public:
        employee();
        employee(char *n, int a);
        void getData();
        void showData();
};

employee::employee(){
    strcpy(name, "");
    age=0;
}

employee::employee(char *n, int a){
    strcpy(name, n);
    age = a;
}

void employee::getData(){
    cout<<endl<<"Enter name and age: "<<endl;
    cin>>name>>age;
}

void employee::showData(){
    cout<<"Name: "<<name<<endl
        <<"Age: "<<age<<endl;
}

int main(){
    employee e1("sanjay", 34);
    e1.showData();

    employee e2;
    e2.getData();
    e2.showData();
    
    return 0;
}