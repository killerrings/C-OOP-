//Use operator overloading on + to concatinate twp strings
#include<iostream>
#include<string.h>
using namespace std;

class strings{
    char str[20];
    public:
        void getString(){
            cin>>str;
        }
        void display(){
            cout<<"Concatenated string: "<<str;
        }
        strings operator+(strings s){
            strings temp;
            strcat(str, s.str);
            strcpy(temp.str, str);
            return temp;
        }
};

int main(){
    strings s1, s2, s3;
    cout<<"Enter first string: ";
    s1.getString();
    
    cout<<"Enter second string: ";
    s2.getString();

    s3=s1+s2;
    s3.display();
    
    return 0;
}