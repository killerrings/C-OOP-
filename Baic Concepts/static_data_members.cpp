#include<iostream>

class Item{
    static int count;
    int number;

    public:
        void getData(int num){
            number = num;
            count ++;
        }

        void getCount(){
            std::cout<<"Count is "<<count<<std::endl;
        }
};

int Item :: count;

int main(){
    Item a, b, c;

    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    std::cout<<"After reading data\n";

    a.getCount();
    b.getCount();
    c.getCount();

    return 0;

}
