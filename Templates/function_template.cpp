#include<iostream>

using namespace std;

template<class T>
T mymin(T a, T b){
    return (a<b)?a:b;
}

int main(){
    int i=10, j=20;
    cout<<endl<<mymin(i, j);

    char ch='A', zh='Z';
    cout<<endl<<mymin(ch,zh);

    return 0;
}