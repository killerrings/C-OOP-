#include<iostream>
#include<string>

using namespace std;

struct employee{
    char name[20];
    int age;
    float salary;
};

int sort_function(const void *a, const void *b);

int main(){
    int num, i;
    employee *ptr_to_record;    //ptr to record

    cout<<"Enter number of records: ";
    cin>>num;

    employee **ptr_to_array_of_ptrs=new employee *[num]; 

    for(i=0; i<num; i++){
        ptr_to_record=new employee;
        cout<<endl<<"Enter a record: ";
        cin>>ptr_to_record->name
            >>ptr_to_record->age
            >>ptr_to_record->salary;
        ptr_to_array_of_ptrs[i]=ptr_to_record;
    }

    cout<<"You entered the following records: "<<endl;

    for(int i=0; i<num; i++){
        ptr_to_record=ptr_to_array_of_ptrs[i];
        cout<<endl<<ptr_to_record->name<<"\t"
                <<ptr_to_record->age<<"\t"
                <<ptr_to_record->salary;
    }

    qsort(ptr_to_array_of_ptrs, num, sizeof(ptr_to_array_of_ptrs[0]),sort_function);

    
}