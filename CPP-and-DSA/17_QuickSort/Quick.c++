#include <iostream>
using namespace std;
int Partition(int *arr,int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[s]>arr[i]){
            count++;
            }
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);
    int  i = s; 
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<pivot){
            i++;
        }
        if(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);   
        }


    }
    return pivotIndex;
}
void Quicksort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int p = Partition(arr,s,e);
    Quicksort(arr,s,p-1);
    Quicksort(arr,p+1,e);
}

int main(){
    int arr[5]={5,2,4,3,1};
    int s=0;
    int e = 5;
    Quicksort(arr,s,e-1);
    for(int i = 0 ;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}