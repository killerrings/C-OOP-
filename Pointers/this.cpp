#include<iostream>

using namespace std;

class Person{
    int age;
    public:
        Person(int x){
            age=x;
        }
        void display(){
            cout<<"age: "<<age<<endl;
        }
        Person olderperson(Person p){
            if(age>p.age)
                return *this;
            else
                return p;
        }
};
int main(){
    Person p(35), r(30);
    Person o=p.olderperson(r);
    o.display();
    return 0;
}