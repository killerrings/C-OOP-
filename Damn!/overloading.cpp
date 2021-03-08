#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inch;
    public:
        void getData(){
            cin>>feet>>inch;
        }
        void operator+(Distance d){
            cout<<"Added distance: "<<feet+d.feet<<"feet"<<" "<<inch+d.inch<<"inches"<<endl;
        }
        void operator==(Distance d){
            if(feet+(inch/12)>d.feet+(d.inch/12))
                cout<<"Distance1 is greater"<<endl;
            else if(feet+(inch/12)<d.feet+(d.inch/12))
                cout<<"Distance2 is greater"<<endl;
            else
                cout<<"Both are equal"<<endl;
        }
        void operator=(Distance d){
            d.feet=feet;
            d.inch=inch;
            cout<<"Distance2 feet:"<<d.feet<<" inches: "<<d.inch<<endl;
        }
};

int main(){
    Distance d1, d2, d3;
    cout<<"Enter Distance1: ";
    d1.getData();
    cout<<"Enter Distance2: ";
    d2.getData();

    d1+d2;

    d1==d2;
    
    d1=d2;

    return 0;
}