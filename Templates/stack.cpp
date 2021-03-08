#include<iostream>

using namespace std;

const int MAX=10;
template <class T>

class Stack{
    T stk[MAX];
    int top;

    public:
        Stack(){
            top=-1;
        }
        void push(T data){
            if(top==MAX-1)
                cout<<"Overflow"<<endl;
            else{
                top++;
                stk[top]=data;
            }
        }
        T pop(){
            if(top==-1){
                cout<<"Underflow"<<endl;
                return 0;
            }
            else{
                T data=stk[top];
                top--;
                return data;
            }
        }
};

int main(){
    Stack <int>s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}