//Multi-dimnesional dynamic arrays
#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Please enter size: "<<endl;
    cin>>size;

    int* myArr=new int[size];

    for(int i=0; i<size; i++){
        cout<<"Array["<<i<<"]";
        cin>>myArr[i];
    }

    for(int i=0; i<size; i++){
        cout<<myArr[i]<<"\t";
    }

    delete[]myArr;
    myArr=NULL;
}