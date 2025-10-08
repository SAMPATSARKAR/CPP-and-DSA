#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next = NULL;
    }

};
void insertAtHead(node* &head,int d){
    node* temp = new node(d);

    temp->next = head;
    head = temp;
}
void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
};
int main(){
    
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    print(head);
    insertAtTail(tail,12);

    print(head);
    insertAtTail(tail,20);

    print(head);
    insertAtTail(tail,30);
    print(head);

    cout<<endl;
    cout<<endl;
    cout<<endl;

    print(head);
    insertAtHead(head,12);

    print(head);
    insertAtHead(head,20);

    print(head);
    insertAtHead(head,30);
    print(head);
    
};