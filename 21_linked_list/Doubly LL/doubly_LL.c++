#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

};
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
};
int getLength(node* &head){
    node* temp = head;
    int len=0;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
};
void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head=temp; 

}
void insertAtTail(node* &tail,int d){
    node* temp = new node(d);

    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(tail);
    insertAtTail(tail,12);
    print(head);
    
    cout<<endl;
    cout<<endl;
    cout<<"For head"<<endl;
    cout<<endl;
    cout<<endl;
    
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,12);
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,20);
    print(head);
    cout<<getLength(head)<<endl;
}