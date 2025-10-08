#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

};
void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;

}
void print(node* &tail){
    node* temp = tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
};

int main(){
    node* node1 = new node(10);   
    node* head = node1; 
    node* tail = node1;
    
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

}