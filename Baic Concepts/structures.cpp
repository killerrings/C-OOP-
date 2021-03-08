#include<iostream>

using namespace std;

struct Smartphone{
    string name;
    int storageSpace;
    string color;
    float price;
};

void printInfo(Smartphone smartphone){
    cout<<"Name- "<<smartphone.name<<endl;
    cout<<"Storage Space- "<<smartphone.storageSpace<<endl;
    cout<<"Color- "<<smartphone.color<<endl;
    cout<<"Price- "<<smartphone.price<<endl;

};

int main(){
 
    Smartphone smartphone1;
    smartphone1.name="iPhone 12";  
    smartphone1.storageSpace=32;
    smartphone1.color="black";
    smartphone1.price=999.99;

    printInfo(smartphone1);
    return 0;
}
