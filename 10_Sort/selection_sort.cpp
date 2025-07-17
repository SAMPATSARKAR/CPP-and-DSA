#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i =0;i<n-1;i++){ // how many times it should work
        int minIndex = i;    
        for(int j =i+1;j<n;j++){ // from next element till last element it will compare
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    
}

int main(){
int arr[6]={3,2,4,5,6,9};
selectionSort(arr,6);
cout<<"Sorted array:- "<<" ";
for(int i =0;i<6;i++){
    cout<<arr[i]<<" ";
}
return 0;

}