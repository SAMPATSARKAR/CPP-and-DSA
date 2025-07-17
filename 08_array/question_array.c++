#include <iostream>
using namespace std;
int main(){
    int arr[18]={0,0,1,0,1,1,0,0,1,1,1,1,1,1,0,0,0,0};
    int i=0;
    int j=17;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if (arr[i]==1 && arr[j]==0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
    }
    for(int i =0;i<18;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    }

