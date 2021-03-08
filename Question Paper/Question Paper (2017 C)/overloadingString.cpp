#include<iostream>

using namespace std;

class strings{
    char str[20];
    public:
        void getString(){
            cin>>str;
        }
        int operator==(strings s){
            if(strcmp(str, s.str)==0)
                return 1;
            else
                return 0;
        }
};

int main(){
    strings s1, s2;
    cout<<"Enter first string: ";
    s1.getString();

    cout<<"Enter second string: ";
    s2.getString();

    if(s1==s2)
        cout<<"Strings are equal"<<endl;
    else
        cout<<"Strings are not equal"<<endl;
    return 0;
}