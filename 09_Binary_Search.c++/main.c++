// finding  point for key
#include <iostream>
using namespace std;
int main(){

    int arr[6]={1,2,3,4,5,6};
    int key=10;
    int start=0;
    int end=5;
    int mid=start+(end-start)/2;
    while(start<=end){
        
        if(arr[mid]==key){
            cout<< mid<<" "<<endl;
            break;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }else{
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    
    }
    cout<<"Not Found"<<endl;
    return 0;
}