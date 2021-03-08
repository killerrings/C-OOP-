#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter two values: ";
    cin>>a>>b;
    try{
        if(b!=0){
            c=a/b;
            cout<<"Answer: "<<c<<endl;
        }
        else{
            throw(b);
        }
    }
    catch(int x){
        cout<<"Exception caught. Division by 0\n";
    }
    return 0;
}