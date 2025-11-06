#include <iostream>
using namespace std;


class a{
    public:
    void fxn1(){
        cout<<"Inside fxn1"<<endl;
    }
};

class b: public a{
    public:
    void fxn2(){
        cout<<"inside fxn2"<<endl;
    }
};

class c:public a{
    public:
    void fxn3(){
        cout<<"Inside fxn3"<<endl;
    }
};


int main(){
    a object1;
    object1.fxn1();

    b object2;
    object2.fxn2();
    object2.fxn1();

    c object3;
    object3.fxn1();
    object3.fxn3();

}