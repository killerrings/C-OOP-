//Use operator overloading to copy one string to another using = operator
#include<iostream>
#include<string.h>

using namespace std;

class String{
    char name[20];
    public:
        String(char str1[]){
            strcpy(this->name, str1);
        }
        void operator = (String s1){
            strcpy(s1.name,name);
            cout<<"The copied string is: "<<s1.name;
        }
};
int main(){
    String s("Rahul"), b("asnja");
    s=b;

    return 0;
}
