#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class hero{
    //properties
    private:
    int health;
    char level;
    public:
    char *name= new char[100];
    //constructor
    hero(){
        cout<<"Sampat is great"<<endl;
        // name= new char[100];
    };
    //paramaterized constructor
    hero(int health){
        cout<<"this->"<<this<<endl;
        this -> health = health;
    }
    //copy constructor
    hero(hero& temp){
        cout<<"copy constructor called"<<endl;
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"[Name:-"<<this->name<<","<<endl;
        cout<<"health:-"<<this->health<<","<<endl;
        cout<<"level"<<this->level<<"]"<<endl;
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
    void setname(char *n){
        strcpy(this->name,n);
    }

};

int main(){
    hero h1;
    h1.setHealth(70);
    h1.setlevel('A');
    char name[4] = "Sam";
    h1.setname(name);
    h1.print();

    hero h2(h1);
    h2.print();

    h1.name[0]='A';
    h1.print();
    h2.print();
    //constructor
    // hero ramesh;---hero ramesh(10){parameterised constructor}
    // cout<<"Address is->"<<&ramesh<<endl;
    // ramesh.getHealth();
    
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
