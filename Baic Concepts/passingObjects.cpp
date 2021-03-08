#include<iostream>

using namespace std;

class Sample{
    private: int a;

    public:
        void getData(){
            cout<<"Enter data: "<<endl;
            cin>>a;
        }

        void showData(){
            cout<<"a is : "<<a<<endl;
        }

        void Big(Sample s){
            if(a>s.a)
                cout<<a<<" is bigger"<<endl;
            else if(a<s.a)
                cout<<s.a<<" is bigger"<<endl;
            else
                cout<<"Both are equal"<<endl;
        }
};

        int main(){
            Sample s1, s2;
            
            s1.getData();
            s2.getData();

            s1.showData();
            s2.showData();

            s1.Big(s2);
            return 0;
        }
