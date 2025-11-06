#include<bits/stdc++.h>
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
node* head = NULL;
void insertAtHead(int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(int data){
    if(head == NULL){
        node* temp = new node(data);
        head = temp;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* nodeToInsert = new node(data);
    temp->next = nodeToInsert;
    nodeToInsert->next = NULL;
    
}
void insertAtAnyPosition(int index,int data){
    if(head == NULL || index <= 1){
        insertAtHead(data);
        return;
    }
    
    node* temp = head;
    int count=0;
    while(temp!=NULL && count<index-1){
        temp = temp->next;
        count++;
    };
    if(temp == NULL){
        insertAtTail(data);
        return;
    }
    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}
void reverseR(node*& head,node* curr,node* prev){
    if(curr == NULL ){
        head = prev;
        return ;
    }
    node* nextNode = curr->next;
    reverseR(head,nextNode,curr);
    curr->next = prev;
    
}
node* reverseRLinkedList(){
    node* curr = head;
    node* prev = NULL;
    reverseR(head,curr,prev);
    return head;
}
void print(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}
int main(){
    
    
    insertAtHead(1);
    insertAtTail(3);
    insertAtAnyPosition(4,4);
    cout<<"original"<<endl;
    print();
    cout<<"Reversed"<<endl;
    reverseRLinkedList();
    print();
    
}
