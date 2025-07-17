#include <iostream>
using namespace std;
void reversee(int arr[],int size){
        for(int i=0;i<size/2;i++){
                int temp=arr[i];
                arr[i]=arr[size-i-1];
                arr[size-i-1]=temp;
        }
}



int main(){
    int size=5;
    int arr[5]={1,2,3,4,5};

    reversee(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";        
    }
    return 0;
}
