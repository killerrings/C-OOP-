#include<iostream>

using namespace std;

class Student{
    int id, sub[6];
    char name[20];

    public:
        void getStu();
        void result();
        void putStu();
};

void Student::getStu(){
    cout<<"Enter student id and name: "<<endl;
    cin>>id>>name;
    // for(int i=0; i<6; i++)
    //     cin>>sub[i];
}

// void Student::result(){
//     int tot=0;
//     float avg;
//     for(int i=0; i<6; i++){
//         tot+=sub[i];
//         avg=tot/6;
//     }
//     cout<<"Total is: "<<tot<<endl;
//     cout<<"Average is: "<<avg<<endl;
// }

void Student::putStu(){
    cout<<id<<"\t"<<name<<endl;
}

int main(){
    Student s[60];
    int n, i;
    cout<<"Enter number of students (1-60)"<<endl;
    cin>>n;
    if(n<1||n>60)
        cout<<"Invalid size"<<endl;
    else{
        for(i=0; i<n; i++)
            s[i].getStu();
    }

    cout<<"Id\tName\n";
    cout<<"\n";
    for(i=0; i<n;i++)
        s[i].putStu();
    return 0;
}
