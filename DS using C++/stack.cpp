#include<iostream>

using namespace std;

class Stack{
    private:
        int top;
        int arr[5];

    public:
        Stack(){
            top=-1;
             for(int i=0; i<5; i++){
                 arr[i]=0;
             }
        }

        bool isEmpty(){
            if(top==-1)
                return true;
            else
                return false;
        }

        bool isFull(){
            if(top==4)
                return true;
            else
                return false;
        }
        
        void push(int data){
            if(isFull()){
                cout<<"Stack overflow"<<endl;
            }
            else{
                top++;
                arr[top]=data;
            }
        }

        int pop(){
            if(isEmpty()){
                cout<<"Stack underflow"<<endl;
                return 0;
            }
            else{
                int temp = arr[top];
                arr[top] = 0; 
                top--;
                return temp;
            }
        }
        int count(){
            return (top+1);
        }
        int peek(int pos){
            if(isEmpty()){
                cout<<"Stack underflow"<<endl;
                return 0;
            }
            else{
                 return arr[pos];
            }
        }

        void change(int pos, int data){
            arr[pos]=data; 
            cout<<"Value changed at position "<<pos<<"to"<<data<<endl;
        }

        void display(){
            cout<<"All the values in the stack are: "<<endl;
            for(int i=4;i>=0;i--){
                cout<<arr[i]<<endl; 
            } 
        }
};

int main(){
    Stack s1;
    int option, position, data;

    do{
        cout<<"What operation do you want to perform. Select an option. Enter 0 to exit"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. Clear screen"<<endl<<endl;
         
         cin>>option;
         switch(option){
             case 0:
                break;
             case 1:
                cout<<"Enter an item to push into the stack"<<endl;
                cin>>data;
                s1.push(data);
                break;
             case 2:
                cout<<" Pop function called. Popped value: "<<s1.pop()<<endl;
                break;
             case 3:
                if(s1.isEmpty())
                    cout<<"Stack is Empty"<<endl;
                else
                    cout<<"Stack is not empty"<<endl;
                break;
             case 4:
                if(s1.isFull())
                    cout<<"Stack is Full"<<endl;
                else
                    cout<<"Stack is not Full"<<endl;
                break;
            case 5:
                cout<<"Enter the position of the item you want to peek: "<<endl;
                cin>>position;
                cout<<"Peek function called. Value at position"<<position<<"is "<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<"Count funciton called. The number of items in the stack are: "<<s1.count()<<endl;
            case 7:
                cout<<"Change function called.\n"<<"Enter position of the item you want to change: ";
                cin>>position;
                cout<<endl;
                cout<<"Enter the value of the item you want to change: ";
                cin>>data;
                s1.change(position, data);
                break;
            case 8:
                cout<<"Display function called "<<endl;
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Choose a valid option"<<endl; 
         }
    }while(option!=0);

    return 0;
}