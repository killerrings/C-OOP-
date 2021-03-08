#include<iostream>
using namespace std;
class Student{
    int age;
    char name[20];
    public:
        friend void operator>>(istream &in, Student s){
            cout<<"Enter student age and name: ";
            in>>s.age>>s.name;
        }
        friend void operator<<(ostream &os, Student s){
            os<<"Age: "<<s.age<<endl;
            os<<"Name: "<<s.name<<endl;
        }
};
int main(){
    Student s;
    cin>>s;
    cout<<s;
    return 0;
}