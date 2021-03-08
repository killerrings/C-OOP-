#include<iostream>
using namespace std;
void test(int x, int y){
    try{
        if(y!=0){
           cout<<x/y<<endl; 
        }else{
            throw y;
        }
    }
    catch(int x){
        cout<<"Caught an exception. Division by 0"<<endl;
    }
}

int main(){
    test(10,0);
    return 0;
}