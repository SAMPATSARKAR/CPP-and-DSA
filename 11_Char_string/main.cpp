#include <iostream>
using namespace std;
char toLowerC(char arr){
    if(arr>='a' && arr<='z'){
        return arr;
    }else{
        char temp = arr - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char arr[],int n){
    int s = 0;
    int  e = n -1;
    while(s<=e){
    if(toLowerC(arr[s]) != toLowerC(arr[e])){
        return 0;
    }
    if(toLowerC(arr[s]) == toLowerC(arr[e])){
        s++;
        e--;
    }
}
return 1;
}
void reverse(char arr[], int n){
    for(int  i = 0 ;i<(n-1)/2;i++){
        swap(arr[i], arr[n-i-1]);
    }
}
int length(char arr[]){
    int count=0;
    for(int i = 0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char arr[20];
    cout<<"enter your name:- ";
    cin>> arr;
    cout<<"Your name is:- "<<arr<<endl;
    cout<<"length of your name is:- "<< length(arr)<<endl;
    cout<<"Reverse of your name is:- ";
    reverse(arr,length(arr));
    cout<<arr;
    cout<<endl;
    if(palindrome(arr,length(arr))){
        cout<<"Is palindrome"<<endl;
    }else{
        cout<<"Not palindrome"<<endl;
    }
}
