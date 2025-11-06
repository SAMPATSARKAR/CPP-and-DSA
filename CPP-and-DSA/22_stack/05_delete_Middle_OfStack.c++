#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& inputstack,int count,int size){
    //base case;
    if(count == size/2){
        inputstack.pop();
        return;
    }
    int num = inputstack.top();
    inputstack.pop();
    solve(inputstack,count+1,size);
    inputstack.push(num);
};
int main(){
    stack<int> s;
    for(int i=0;i<5;i++){
        s.push(i);
    }
    for(int i=0;i<5;i++){
        cout<<s.top()<<endl;
        s.pop();
    }
    for(int i=0;i<5;i++){
        s.push(i);
    }
    solve(s,0,5);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<s.top()<<endl;
        s.pop();
    }

}