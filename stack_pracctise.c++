// #include<bits/stdc++.h>
// using namespace std;
// class Mystack{
//     public:
//     int* arr;
//     int top1;
//     int top2;
//     int size;
//     Mystack(int size){
//         this->size=size;
//         top1=-1;
//         top2=size;
//         arr= new int[size];
//     }
//     void push1(int element){
//         if(top2-top1>1){
//             top1++;
//             arr[top1]=element;
//         }else{
//             cout<<"StackOver flow"<<endl;
//         }

//     }
//     void push2(int element){
//         if(top2-top1>1){
//             top2--;
//             arr[top2]=element;
//         }else{
//             cout<<"StackOver flow"<<endl;
//         }

//     }
//     void pop1(){
//         if(top1>=0){
//             top1--;
//         }else{
//             cout<<"Stack is empty"<<endl;
//         }
//     }
//     void pop2(){
//         if(top2<size){
//             top2++;
//         }else{
//             cout<<"Stack is empty"<<endl;
//         }
//     }
//     int peek1(){
//         if(top1>=0){
//             return arr[top1];
//         }else{
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//     }
//     int peek2(){

//         if(top2<size){
//             return arr[top2];
//         }else{
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//     }
//     bool isEmpty1(){
//         if(top1==-1){
//             return true;
//         }else{
//             return false;
//         }
//     }
//     bool isEmpty2(){
//         if(top2==size){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };
// int main(){

//     Mystack a(5);
//     a.push1(1);
//     a.push2(3);
//     a.push1(2);
//     cout<<"Push1 "<<a.peek1()<<endl;
//     cout<<"Push2 "<<a.peek2()<<endl;
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;
//     a.pop2();
//     cout<<"Push1 "<<a.peek1()<<endl;
//     cout<<"Push2 "<<a.peek2()<<endl;
    

// }
// // -------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string name = "sampat";
//     stack<char> a;
//     for(int i=0;i<name.length();i++){
//         a.push(name[i]);
//     }
//     string b= "";
//     while(!a.empty()){
//         char ch=a.top();
//         b.push_back(ch);
//         a.pop();
//     }
//     cout<<"reverse is:- "<<b<<endl;

// }
// -------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void middle(stack<int>& inputstack,int size,int count){
//     if(count == size/2){
//         inputstack.pop();
//         return;
//     }
//     int num = inputstack.top();
//     inputstack.pop();
//     middle(inputstack,size,count+1);
//     inputstack.push(num);
// };
// void print(stack<int> inputstack){
//     while(!inputstack.empty()){
//         cout<<inputstack.top()<<endl;
//         inputstack.pop();
//     }
// }
// int main(){
//     stack<int> inputstack;
//     inputstack.push(1);
//     inputstack.push(2);
//     inputstack.push(3);
//     inputstack.push(4);
//     inputstack.push(5);
//     middle(inputstack,inputstack.size(),0);
//     print(inputstack);
//     // cout<<
// }
// ---------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// bool isValidParenthesis(string& para){
//     stack<char> s;
//     for(int i=0;i<para.length();i++){
//         char ch = para[i];
//         if(ch == '(' || ch == '{' || ch == '['){
//             s.push(ch);
//         }else{
//             if(!s.empty()){
//                 char top = s.top();
//                 if(ch == ')'&&top=='(' || ch == ']'&&top=='[' || ch == '}'&&top=='{'){
//                     s.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }else{
//                 return false;
//             }
//     }
// }
//     if(s.empty()){
//         return true;
//     }else{
//         return false;
//     }
// };
// int main(){
//     string a = "{}{}{}{}{}{}{}{{}}";
//     if(isValidParenthesis(a)){
//         cout<<"true"<<endl;
//     }else{
//         cout<<"false"<<endl;
//     }
// }