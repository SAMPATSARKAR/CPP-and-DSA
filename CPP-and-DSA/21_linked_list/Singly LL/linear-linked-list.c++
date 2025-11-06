#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertAtHead(node* &head,int d){
    //new mode created
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail,int d){
    //new node create
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
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);

    cout<<endl;
    cout<<endl;
    cout<<endl;

    print(tail);
    insertAtTail(tail,14);
    print(tail);
    insertAtTail(tail,25);
    print(tail);
}