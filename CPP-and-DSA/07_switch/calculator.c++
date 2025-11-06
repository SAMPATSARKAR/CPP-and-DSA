#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    char c;
    cin>>c;
    switch(c){
        case '*':
        cout<<a*b<<endl;
        break;
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"wrong"<<endl;
    }
    return 0;
}