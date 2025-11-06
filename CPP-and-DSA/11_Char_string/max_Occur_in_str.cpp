#include <iostream>
#include <string>
using namespace std;

char maxOccurence(string a){
    char arr[26]={0};

    for(int i = 0 ; i < a.size();i++){
        int temp = a[i] - 'a';
            arr[temp]++;
    }    
    int max = -1;
    int ans = 0;
    for(int j = 0 ; j < 26;j++){
        if(max < arr[j]){
            ans = j;
            max = arr[j];
        }
    }
    return 'a'+ ans;

}
int main(){

    string str = "sampat";
    cout<<"string is:- "<<str<<endl;
    cout << "max occurence:- "<<maxOccurence(str)<<endl;


}