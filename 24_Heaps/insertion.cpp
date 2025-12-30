#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index]=val;
        while(index>1){
        int parent = index/2;
        if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            index = parent;
        }else{
            return;
        }
            }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deletefh(){
        if(size == 0) return ;
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<=size){
            int leftindex=i*2;
            int rightindex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex<size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }else{
                return;
            }
        }
    }
};
int main(){
    heap a;
    a.insert(50);
    a.insert(55);
    a.insert(53);
    a.insert(54);
    a.insert(52);
    a.print();
    a.deletefh();
    a.print();

}