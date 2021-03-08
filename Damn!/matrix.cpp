#include<iostream>
using namespace std;

const int rows=3;
const int cols=3;

class Matrix{
    int arr[rows][cols];
    public:
        void read();
        Matrix addMatrix(Matrix &m);
        Matrix mulMatrix(Matrix);
        void display();
};
void Matrix::read(){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j]; 
        }
    }
}
void Matrix::display(){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

Matrix Matrix::addMatrix(Matrix &m){
    Matrix k;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            k.arr[i][j]=arr[i][j]+m.arr[i][j];
        }
    }
    return k;
}

int main(){
    Matrix m1, m2, m3;
    cout<<"Second matrix"<<endl;
    m1.read();
    cout<<"First Matrix is: "<<endl;
    m1.display();

    cout<<"Second matrix"<<endl;
    m2.read();
    cout<<"Second Matrix is: "<<endl;
    m2.display();

    cout<<endl;

    m3=m1.addMatrix(m2);
    m3.display();
    return 0;
}