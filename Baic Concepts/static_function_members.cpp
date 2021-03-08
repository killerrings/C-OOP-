#include<iostream>

class Test{
    int code;
    static int count;

    public:
        void setCode(){
            code = ++count;
        }

        void showCode(){
            std::cout<<"Object number: "<<code<<std::endl;
        }

        static void showCount(){    //static member funtion
            std::cout<<"Count is: "<<count<<std::endl;
        }
};

int Test :: count;

int main(){
    Test t1, t2;

    t1.setCode();
    t2.setCode();

    Test::showCount(); //static member function is called by referencing the class and not the object

    Test t3;
    t3.setCode();

    Test::showCount();

    t1.showCode();
    t2.showCode();
    t3.showCode();

    return 0;
}