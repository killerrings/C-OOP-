#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int *ptr;
    ptr=arr;

    for(int i=0; i<5; i++){
        cout<<"*(ptr+"<<i<<")=";
        cout<<*(ptr+i)<<endl;
    }

    return 0;
}