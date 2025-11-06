#include <iostream>
#include <string>
using namespace std;
void reverse(string &a ,int startworld, int  i ){
    int s = startworld;
    int e = i-1;
    while(s<=e){
        swap(a[s++],a[e--]);
    }
}
int main(){
    string str;
    str = "Let's take LeetCode contest";
    cout<<str<<endl;
    int startworld = 0;
    int  n = str.size();
    int  i = 0 ;
    for(; i <= n ;i++){
        if(i == n || str[i] == ' '){
            reverse(str,startworld,i);
            startworld = i + 1;
        }
    }
    cout<<str<<endl;
    return  0 ;
}