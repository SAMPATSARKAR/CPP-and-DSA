#include<bits/stdc++.h>
using namespace std;
void sortInsert(stack<int>& stack,int num){
    //base case
    if(stack.empty()||stack.top()<num){
        stack.push(num);
        return ;
    }
    int n = stack.top();
    stack.pop();
    sortInsert(stack,num);
    stack.push(n);
}
void sortStack(stack<int>& stack){
    //base case
    if(stack.empty()){
        return ;
    }
    int num = stack.top();
    stack.pop();
    //recursive call
    sortStack(stack);
    sortInsert(stack,num);
};
int main(){
    stack<int> a;
    a.push(3);
    a.push(5);
    a.push(8);
    a.push(7);
    a.push(6);
    a.push(70);
    a.push(100);
    sortStack(a);
    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
}