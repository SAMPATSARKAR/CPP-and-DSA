#include <iostream>
using namespace std;
class hero{
    //properties
    private:
    public:
    hero(){
    cout<<"Sampat is great"<<endl;
    };
    int health;

    char level;
    void print(){
        cout<<level<<endl;
    }
    //getter--fetch/read
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    //setter--condn
    void setHealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }

};
int main(){
    
    //hero() method

    //obj statically
    // hero sampat;
    // obj dynamically
    // hero *sampat1 = new hero;


    //static allocation
    //creation of Obj
    // hero ramesh;
    // ramesh.health=70;
    // ramesh.level='A';
    // cout<< "Health is:- "<<ramesh.getHealth()<<endl;
    // cout<< "Level is:- "<<ramesh.getlevel()<<endl;
    
    // //dynamic allocation
    // hero *b = new hero;
    // b->health=70;
    // b->level='A';

    // cout<< "Health is:- "<<b->getHealth()<<endl;
    // cout<< "Level is:- "<<b->getlevel()<<endl;
    
    // delete b;
    // b=nullptr;

}
