#include <iostream>
#include <string>
using namespace std;
class human{
    public:
    int age;
    int height;
    int weight;

    
    
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        return this->weight=w;
    };
};
class male:public human{
    public:
    string color="Red";
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

int main(){

    male m1;
    cout<<m1.height<<endl;











    // male object1;

    // cout<<object1.age<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.color<<endl;
    // cout<<object1.setWeight(84);
    // cout<<object1.weight<<endl;
    // object1.sleep();
    return 0;
}