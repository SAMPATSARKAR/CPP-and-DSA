#include <iostream>
using namespace std;
int update2(int &n){//pass by reference
    n++;
    return n;
};
int update1(int n){
    n++;
    return n;
};
int main(){
    int  n =5;
    cout<<"before"<<" "<<n<<endl;
    update1(n);
    cout<<"after"<<" "<<n<<endl;
    cout<<"before"<<" "<<n<<endl;
    update2(n);
    cout<<"after"<<" "<<n<<endl;

};