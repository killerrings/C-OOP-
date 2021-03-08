#include<iostream>
using namespace std;

template<class T>
void sort(T arr[], int size){
    for(int i=0; i<size;i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
int main(){
    // int arr[5]={5,2,8,9,1};
    // sort(arr,5);
    // for(int i=0; i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"The lowest element: "<<arr[0]<<endl;

    double arr[5]={2.25, 2.10, 5.65, 9.13, 8.23};
    sort(arr, 5);
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The lowest element: "<<arr[0]<<endl;

    return 0;
}