#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.pop();
    cout<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack is: "<<sizeof(s)<<endl;

}