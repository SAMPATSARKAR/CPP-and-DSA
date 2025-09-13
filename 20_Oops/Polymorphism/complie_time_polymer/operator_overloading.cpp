#include <iostream>
using namespace std;
class b{
    public:
    int a;
    int c;
    public:
    int add(){
        return a+c;
    }
    void operator+(b &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output:-"<< value2 - value1 <<endl;
    }
};
int main(){
    b obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1+obj2;
    
}