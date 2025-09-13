#include <iostream>
#include <string>
#include<cstring>

using namespace std;
class animal{
    public:
    string color;
    int weight;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};
class human{
    public:
    int wt;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class hybrid: public animal,public human{
    
};
int main(){
    hybrid obj1;
    obj1.bark();
    obj1.speak();
}