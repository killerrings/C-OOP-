#include<iostream>

using namespace std;

class Node{
    public:
        int key;
        int data;
        Node * next;
        Node(){
            key=0;
            data=0;
            next=NULL;
        } 
        Node(int k, int d){
            key = k;
            data = d;
            next = NULL;
        }
};

class SinglyLinkedList{
    public:
        Node *head;
        SinglyLinkedList(){
            head = NULL;
        }
        SinglyLinkedList(Node *n){
            head = n;
        }
};

int main(){

    return 0;
}