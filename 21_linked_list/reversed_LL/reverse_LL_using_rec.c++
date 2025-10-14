#include<iostream>
using namespace std;
class node{
    //constructor
    public:
    int data;
    node* next;
    //constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    
    ~node(){
        int value = this->data;
        while(this->next != NULL){
            delete next;
            next=NULL;
        }

        cout<<"Memeory freed is:- "<<value<<endl;
    }
};

void insertNode(node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
        return;
    }else{
        //non-empty list
        node* curr = tail;
        while(curr->data != element){
            curr=curr->next;

        }
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node* &tail){
    node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
    
}
void reverse(node* &head,node* curr,node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }

    node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;

}

node* reverseLinkedList(node* head){
    node* curr = head;
    node* prev = NULL;
    reverse(head,curr,prev);
    return head;

}
int main(){
    node* node1 = new node(10);
    node* head = NULL;
    node* tail = NULL;
    insertNode(tail,10,2);
    print(tail);
    insertNode(tail,2,3);
    print(tail);
    insertNode(tail,3,4);
    print(head);

    reverseLinkedList(head);
    print(head);

}