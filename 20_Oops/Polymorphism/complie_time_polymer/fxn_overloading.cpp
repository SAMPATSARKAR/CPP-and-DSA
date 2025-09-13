#include <iostream>
using namespace std;
class a{
    public:
    void sayhello(){
        cout<<"Hello Sampat"<<endl;;
    }
    int sayhello(string name,int n){
        cout<<"Hello sampat"<<endl;
        return n;
    }
    void sayhello(string name){
        cout<<"Hello"<<name<<endl;
    }
};
int main(){
    a obj;
    obj.sayhello();
}