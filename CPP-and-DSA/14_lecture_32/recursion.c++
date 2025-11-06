#include <iostream>
#include<string>
using namespace std;
void sayDigit(int n,string arr[]){
    if(n==0){
        return;
    }

    //processing
    int num = n%10;
    n = n/10;

    //tail-recursion
    sayDigit(n,arr);
    cout<<arr[num]<<" ";
}
int main(){
    string arr[12]={"zero","one","two","three","four","five","six","seven","eight", "nine","ten"};
    int n;
    cin>>n;
    sayDigit(n,arr);
    return 0;
}