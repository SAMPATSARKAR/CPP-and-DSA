#include <iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"I am inside a"<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"I am inside b"<<endl;
    }
};
class c:public B,public A{

};
int main(){

    c obj1;
    // obj1.func();//error bcz of ambigous
    obj1.A::func();
    obj1.B::func();
}
