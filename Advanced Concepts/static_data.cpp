#include<iostream>

using namespace std;

class Sample{
    static int count;

    public:
        Sample(){
            count++;
            cout<<count<<" objects created\n";
        }

        ~Sample(){
            cout<<count<<" objects deleted\n";
            count--;
        }
};

int Sample :: count;

int main(){
    Sample s1, s2, s3;
    return 0;
}