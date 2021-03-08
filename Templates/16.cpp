#include<iostream>
using namespace std;
class Num{
	int data;
	public:
		int getData(){
			return data;
		}
	friend ostream &operator<<(ostream &os,Num &obj);
	friend istream &operator>>(istream &is,Num &obj);
};
ostream &operator<<(ostream &os,Num &obj){
	os<<obj.data;
	return os;
}
istream &operator>>(istream &is,Num &obj){
    is >> obj.data; 
    return is; 
}
int main(){
	Num a1;
	cin>>a1;
	cout<<endl<<a1;
}
