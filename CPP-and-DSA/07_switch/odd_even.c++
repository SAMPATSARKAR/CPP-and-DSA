#include <iostream>
using namespace std;

bool isEven(int b){
    if(b&1){
        return 0;
    }
    return 1;
}

int main(){

    int a;
    cin>>a;
    if(isEven(a)){
        cout<<"Number is even"<<endl;
    }else{
        cout<<"Number is odd"<<endl;
    }

    return 0;

}