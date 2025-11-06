#include <iostream>
using namespace std;
int main(){
    int a = 1;
    char ch = '1';
    switch(ch){
        case '1':switch(a){
            case 1:
                cout<<"First number"<<endl;
                break;
            }
            break;
        case 2:
            cout<<"Second number"<<endl;
            break;
        case 3:
            cout<<"Third number"<<endl;
            break;
        default: cout<<"Default"<<endl;
    }
    cout<<endl;
    return 0;

}