#include<iostream>
using namespace std;
template <class T>
class vectors{
    public:
        T i;
        T j;
        T k;
};
template <class T>
T scalarProduct(vectors<T> a,vectors<T> b){
    return a.i*b.i+a.j*b.j+a.k*b.k;
}
int main(){
    vectors<int> a1;
    vectors<int> a2;
    a1.i=1;
    a1.j=5;
    a1.k=3;
    a2.i=4;
    a2.j=1;
    a2.k=-1;
    cout<<scalarProduct<int>(a1, a2);
    return 0;

}