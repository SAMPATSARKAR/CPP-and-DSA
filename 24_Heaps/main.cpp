#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int size;
    int arr[100];
    heap(){
        size=0;
        arr[0]=-1;
    }
    void insert(int val){
        size = size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }
        }
    }
    void deletion(){
        if(size == 0) cout<<"Nothing to delete";
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftindex = 2 *i;
            int rightindex = 2*i+1;
            if(leftindex<size && arr[leftindex]> arr[i]){
                swap(arr[leftindex],arr[i]);
                i=leftindex;
            }
            else if(rightindex<size && arr[rightindex]> arr[i]){
                swap(arr[rightindex],arr[i]);
                i=rightindex;
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
    
};
void heapify(int *arr,int n,int i){
    int leftindex = 2*i;
    int rightindex = 2*i+1;
    int largest = i;

    if(leftindex<=n && arr[largest]<arr[leftindex]){
        largest=leftindex;
    }
    if(rightindex<=n && arr[largest]<arr[rightindex]){
        largest=rightindex;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapSort(int* arr,int size){
    int n= size;
    while(n>1){
    swap(arr[1],arr[n]);
    n--;
    heapify(arr,n,1);
}
}
int main(){

    heap a;
    a.insert(50);
    a.insert(54);
    a.insert(53);
    a.insert(55);
    a.insert(52);
    a.insert(51);
    a.print();
    a.deletion();cout<<endl;
    a.print();
    cout<<endl;
    cout<<"Heapify: "<<endl;
    int arr[6]={-1,50,54,53,55,51};
    for(int i = 2;i>=1;i--){
        heapify(arr,6,i);
    }
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    heapSort(arr,5);
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


}